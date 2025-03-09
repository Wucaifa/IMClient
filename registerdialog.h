#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QDialog>
#include "global.h"
#include <functional>
#include <QMap>

namespace Ui {
class RegisterDialog;
}

class RegisterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterDialog(QWidget *parent = nullptr);
    ~RegisterDialog();
    void on_get_code_clicked();

signals:
    void sigSwitchLogin();
public slots:
    void slot_reg_mod_finish(ReqId id, QString res, ErrorCodes err);

private slots:
    void on_confirm_btn_clicked();

    void on_cancel_btn_clicked();

    void on_return_btn_clicked();

    void on_verification_code_btn_clicked();

private:
    void initHttpHandlers();
    bool checkUserValid();
    bool checkEmailValid();
    bool checkPassValid();
    bool checkVarifyValid();
    bool checkConfirmValid();
    void showTip(QString str,bool b_ok);
    void AddTipErr(TipErr te,QString tips);
    void DelTipErr(TipErr te);
    void ChangeTipPage();
private:
    Ui::RegisterDialog *ui;
    QMap<ReqId, std::function<void(const QJsonObject&)>> _handlers;
    QMap<TipErr, QString> _tip_errs;
    QTimer * _countdown_timer;
    int _countdown;

};

#endif // REGISTERDIALOG_H
