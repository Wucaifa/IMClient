#include "clickpwdhide.h"
#include <QApplication>
#include <QWidget>
#include <QAction>
#include <QPainter>
#include <QMouseEvent>

ClickPwdHide::ClickPwdHide(QWidget *parent) : QLineEdit(parent), m_isPasswordVisible(false)
{
    // 初始设置为密码模式
    setEchoMode(QLineEdit::Password);

    // 创建一个 QAction 用于显示/隐藏密码
    m_eyeAction = new QAction(QIcon(":/res/unvisible.png"), "", this);
    m_eyeAction->setToolTip("显示密码");

    // 将 QAction 添加到 QLineEdit 右侧
    addAction(m_eyeAction, QLineEdit::TrailingPosition);

    // 连接 QAction 的 triggered 信号到切换密码显示的槽
    connect(m_eyeAction, &QAction::triggered, this, &ClickPwdHide::togglePasswordVisibility);
}

void ClickPwdHide::mousePressEvent(QMouseEvent *event)
{
    // 获取 QLineEdit 的内容区域
    QRect actionRect = this->rect();
    int rightEdge = actionRect.right();

    // 检查鼠标点击是否发生在 QLineEdit 的右侧
    if (event->x() >= rightEdge - 30 && event->x() <= rightEdge) {
        togglePasswordVisibility();
    } else {
        QLineEdit::mousePressEvent(event); // 否则调用基类的事件处理
    }
}

void ClickPwdHide::togglePasswordVisibility()
{
    if (m_isPasswordVisible) {
        // 隐藏密码
        setEchoMode(QLineEdit::Password);
        m_eyeAction->setIcon(QIcon(":/res/unvisible.png"));
        m_eyeAction->setToolTip("显示密码");
    } else {
        // 显示密码
        setEchoMode(QLineEdit::Normal);
        m_eyeAction->setIcon(QIcon(":/res/visible.png"));
        m_eyeAction->setToolTip("隐藏密码");
    }
    m_isPasswordVisible = !m_isPasswordVisible;
}
