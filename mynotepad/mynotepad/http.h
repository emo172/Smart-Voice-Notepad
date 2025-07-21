#ifndef HTTP_H
#define HTTP_H

#include <QObject>
#include <QMap>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QEventLoop>

class Http : public QObject
{
    Q_OBJECT
public:
    explicit Http(QObject *parent = nullptr);

    bool postSyn(QString url, QMap<QString, QString> headerdata, QByteArray requestData, QByteArray &replydata);

signals:

public slots:
};

#endif // HTTP_H
