#ifndef SPEECH_H
#define SPEECH_H

#include <QObject>
#include "http.h"
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QHostInfo>
#include <QFile>
#include <QMessageBox>
#include <QIODevice>

//获取access_token相关
const QString baiduTokenUrl = "http://aip.baidubce.com/oauth/2.0/token?grant_type=client_credentials&client_id=%1&client_secret=%2&";
const QString client_id = "MFH5r8SRQzMzOKUMJduorqLx";
const QString client_secret = "WQB1VuEzKAX8mUiF32qmqHKH5tipylA0";

//语音识别相关
const QString baiduSpeechurl = "http://vop.baidu.com/server_api?dev_pid=1537&cuid=%1&token=%2"; //普通话测试

class Speech : public QObject
{
    Q_OBJECT
    public:
        explicit Speech(QObject *parent = nullptr);
        QString speechIdentify(QString filename);  //开始识别

        QString getJsonvalue(QByteArray ba,QString key);
    signals:

    public slots:
    private:
        QString  accessToken;
};
#endif // SPEECH_H
