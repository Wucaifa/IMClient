#ifndef CLICKPWDHIDE_H
#define CLICKPWDHIDE_H

#include <QLineEdit>

class ClickPwdHide : public QLineEdit
{
    Q_OBJECT
public:
    explicit ClickPwdHide(QWidget *parent = nullptr);

signals:

protected:
    void mousePressEvent(QMouseEvent *event) override;
private slots:
    void togglePasswordVisibility();
private:
    QAction *m_eyeAction;
    bool m_isPasswordVisible;
};

#endif // CLICKPWDHIDE_H
