#ifndef HTTPMGR_H
#define HTTPMGR_H


#include "singleton.h"
#include <QString>
#include <QUrl>
#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include "global.h"
#include <memory>
#include <QJsonObject>
#include <QJsonDocument>
/******************************************************************************
 *
 * @file       httpmgr.h
 * @brief      网络连接
 *
 * @author     WuCF
 * @date       2025/01/07
 * @history
 *****************************************************************************/
//std::enable_shared_from_this<T> 是 C++ 标准库中的一个模板类,通常用于使得一个对象能够安全地生成指向自己的 std::shared_ptr
class HttpMgr:public QObject, public Singleton<HttpMgr>,
        public std::enable_shared_from_this<HttpMgr>
{
    Q_OBJECT

public:
    ~HttpMgr(){}
    void PostHttpReq(QUrl url, QJsonObject json, ReqId req_id, Modules mod);
private:
    friend class Singleton<HttpMgr>;
    HttpMgr();
    QNetworkAccessManager _manager;
signals:
    void sig_http_finish(ReqId id, QString res, ErrorCodes err, Modules mod);
    void sig_reg_mod_finish(ReqId id, QString res, ErrorCodes err);
    void sig_reset_mod_finish(ReqId id, QString res, ErrorCodes err);
    void sig_login_mod_finish(ReqId id, QString res, ErrorCodes err);

public slots:
    void slot_http_finish(ReqId id, QString res, ErrorCodes err, Modules mod);
};

#endif // HTTPMGR_H
