#ifndef SQLITEHELPER_H
#define SQLITEHELPER_H

#include <QString>
#include <QVector>
#include <QPair>
#include <QtSql/QSqlDatabase>  // 直接包含 QSqlDatabase 头文件
#include <QtSql/QSqlQuery>     // 需要使用 QSqlQuery

class SQLiteHelper {
public:
    // 构造函数和析构函数
    // 传入数据库文件的路径
    SQLiteHelper(const QString& dbName);
    ~SQLiteHelper();

    // 创建表
    bool createTables();

    // 保存好友数据
    bool saveFriend(int userId, int friendId, const QString& nickname, const QString& avatar, const QString& status);

    // 获取好友列表
    QVector<QPair<int, QString>> getFriends(int userId);

    // 更新好友的昵称
    bool updateFriendNickname(int userId, int friendId, const QString& nickname);

    // 删除好友
    bool deleteFriend(int userId, int friendId);

    // 保存聊天记录
    bool saveMessage(int userId, int friendId, const QString& msgId, int senderId, const QString& content, const QString& msgType);

    // 获取聊天记录
    QVector<QPair<int, QString>> getMessages(int userId, int friendId);

private:
    QSqlDatabase db;  // 用于访问 SQLite 数据库
};

#endif // SQLITEHELPER_H
