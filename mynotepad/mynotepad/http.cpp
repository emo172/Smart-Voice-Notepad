#include "http.h"

Http::Http(QObject *parent) : QObject(parent)
{

}

bool Http::postSyn( QString url, QMap<QString, QString> headerdata, QByteArray requestData, QByteArray &replydata)
{
//发送请求的对象
    QNetworkAccessManager manager;
//请求对象
    QNetworkRequest request;
    request.setUrl(url);

    QMapIterator<QString, QString> it(headerdata);  //迭代器
    while (it.hasNext())                            //遍历
    {
        it.next();
        request.setRawHeader(it.key().toLatin1(),it.value().toLatin1());
    }

    QNetworkReply *reply = manager.post(request, requestData) ;
    QEventLoop l;
    //一旦服务器返回，reply会发出信号
    connect(reply, &QNetworkReply::finished, &l, &QEventLoop::quit);
    l.exec();
    //死循环，reply发出信号， 结束循环

    if (reply != nullptr && reply->error() == QNetworkReply::NoError)
    {
        replydata = reply->readAll(); //读取服务 器返回的数据
        qDebug() << replydata;
        return true;
    }
    else
    {
        qDebug() << "请求失败";
        return false;
    }
}
