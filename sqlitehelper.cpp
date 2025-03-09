#include "sqlitehelper.h"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QVariant>
#include <QDebug>

SQLiteHelper::SQLiteHelper(const QString& dbName) {
    // 打开数据库
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbName);
    if (!db.open()) {
        qDebug() << "Failed to open database:" << db.lastError().text();
    } else {
        qDebug() << "Database opened successfully!";
    }
}

SQLiteHelper::~SQLiteHelper() {
    // 关闭数据库
    db.close();
}

bool SQLiteHelper::createTables() {
    // 检查数据库是否已经打开
    if (!db.isOpen()) {
        qDebug() << "Database is not open!";
        return false;
    }

    // 检查表是否已经存在
    QSqlQuery query;
    // 检查 users 表是否存在
    if (!query.exec("SELECT name FROM sqlite_master WHERE type='table' AND name='users';")) {
        qDebug() << "Error checking if table exists:" << query.lastError().text();
        return false;
    }

    // 如果表不存在，则创建
    if (!query.next()) {
        // 创建 users 表
        if (!query.exec("CREATE TABLE IF NOT EXISTS users ("
                        "user_id INTEGER PRIMARY KEY AUTOINCREMENT, "
                        "username TEXT NOT NULL, "
                        "password TEXT NOT NULL)")) {
            qDebug() << "Error creating users table:" << query.lastError().text();
            return false;
        }

        // 创建 friends 表
        if (!query.exec("CREATE TABLE IF NOT EXISTS friends ("
                        "user_id INTEGER, "
                        "friend_id INTEGER, "
                        "nickname TEXT, "
                        "avatar TEXT, "
                        "status TEXT, "
                        "PRIMARY KEY (user_id, friend_id), "
                        "FOREIGN KEY (user_id) REFERENCES users(user_id), "
                        "FOREIGN KEY (friend_id) REFERENCES users(user_id))")) {
            qDebug() << "Error creating friends table:" << query.lastError().text();
            return false;
        }

        // 创建 messages 表
        if (!query.exec("CREATE TABLE IF NOT EXISTS messages ("
                        "message_id INTEGER PRIMARY KEY AUTOINCREMENT, "
                        "sender_id INTEGER, "
                        "receiver_id INTEGER, "
                        "content TEXT, "
                        "timestamp DATETIME DEFAULT CURRENT_TIMESTAMP, "
                        "FOREIGN KEY (sender_id) REFERENCES users(user_id), "
                        "FOREIGN KEY (receiver_id) REFERENCES users(user_id))")) {
            qDebug() << "Error creating messages table:" << query.lastError().text();
            return false;
        }
        qDebug() << "Tables created successfully!";
    } else {
        qDebug() << "Tables already exist.";
    }

    return true;
}

// 保存好友数据
bool SQLiteHelper::saveFriend(int userId, int friendId, const QString& nickname, const QString& avatar, const QString& status) {
    QSqlQuery query;
    query.prepare("INSERT OR REPLACE INTO friends (user_id, friend_id, nickname, avatar, status) "
                  "VALUES (:user_id, :friend_id, :nickname, :avatar, :status)");
    query.bindValue(":user_id", userId);
    query.bindValue(":friend_id", friendId);
    query.bindValue(":nickname", nickname);
    query.bindValue(":avatar", avatar);
    query.bindValue(":status", status);

    if (!query.exec()) {
        qDebug() << "Failed to save friend:" << query.lastError().text();
        return false;
    }
    return true;
}

// 获取好友列表
QVector<QPair<int, QString>> SQLiteHelper::getFriends(int userId) {
    QVector<QPair<int, QString>> friends;
    QSqlQuery query;
    query.prepare("SELECT friend_id, nickname FROM friends WHERE user_id = :user_id AND status = 'accepted'");
    query.bindValue(":user_id", userId);

    if (query.exec()) {
        while (query.next()) {
            int friendId = query.value(0).toInt();
            QString nickname = query.value(1).toString();
            friends.append(qMakePair(friendId, nickname));
        }
    } else {
        qDebug() << "Failed to get friends:" << query.lastError().text();
    }
    return friends;
}

// 更新好友的昵称
bool SQLiteHelper::updateFriendNickname(int userId, int friendId, const QString& nickname) {
    QSqlQuery query;
    query.prepare("UPDATE friends SET nickname = :nickname WHERE user_id = :user_id AND friend_id = :friend_id");
    query.bindValue(":nickname", nickname);
    query.bindValue(":user_id", userId);
    query.bindValue(":friend_id", friendId);

    if (!query.exec()) {
        qDebug() << "Failed to update nickname:" << query.lastError().text();
        return false;
    }
    return true;
}

// 删除好友
bool SQLiteHelper::deleteFriend(int userId, int friendId) {
    QSqlQuery query;
    query.prepare("DELETE FROM friends WHERE user_id = :user_id AND friend_id = :friend_id");
    query.bindValue(":user_id", userId);
    query.bindValue(":friend_id", friendId);

    if (!query.exec()) {
        qDebug() << "Failed to delete friend:" << query.lastError().text();
        return false;
    }
    return true;
}

// 保存聊天记录
bool SQLiteHelper::saveMessage(int userId, int friendId, const QString& msgId, int senderId, const QString& content, const QString& msgType) {
    QSqlQuery query;
    query.prepare("INSERT OR REPLACE INTO messages (user_id, friend_id, msg_id, sender_id, content, msg_type) "
                  "VALUES (:user_id, :friend_id, :msg_id, :sender_id, :content, :msg_type)");
    query.bindValue(":user_id", userId);
    query.bindValue(":friend_id", friendId);
    query.bindValue(":msg_id", msgId);
    query.bindValue(":sender_id", senderId);
    query.bindValue(":content", content);
    query.bindValue(":msg_type", msgType);

    if (!query.exec()) {
        qDebug() << "Failed to save message:" << query.lastError().text();
        return false;
    }
    return true;
}

// 获取聊天记录
QVector<QPair<int, QString>> SQLiteHelper::getMessages(int userId, int friendId) {
    QVector<QPair<int, QString>> messages;
    QSqlQuery query;
    query.prepare("SELECT sender_id, content FROM messages WHERE user_id = :user_id AND friend_id = :friend_id ORDER BY timestamp DESC LIMIT 50");
    query.bindValue(":user_id", userId);
    query.bindValue(":friend_id", friendId);

    if (query.exec()) {
        while (query.next()) {
            int senderId = query.value(0).toInt();
            QString content = query.value(1).toString();
            messages.append(qMakePair(senderId, content));
        }
    } else {
        qDebug() << "Failed to get messages:" << query.lastError().text();
    }
    return messages;
}

