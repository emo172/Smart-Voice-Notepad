#include "speech.h"


//构造函数
Speech::Speech(QObject *parent) : QObject(parent)
{

}


QString Speech::speechIdentify(QString filename)
{
    //获取token
    QString tokenUrl = QString(baiduTokenUrl).arg(client_id).arg(client_secret);

    QMap<QString, QString> headers;
    headers.insert(QString("Content-Type"), QString("audio/pcm;rate=16000"));
    QByteArray requestdata;   //发送的内容
    QByteArray replydata;     //服务器返回的内容
    Http httputil;
    bool success = httputil.postSyn(tokenUrl, headers, requestdata, replydata);
    if (success)
    {
        QString key = "access_token";
        accessToken  = getJsonvalue(replydata, key);  //获取到access_token（通过json数据格式解析）
        //qDebug() << accessToken << endl;
    }
    else
        return "";

    //语言识别
    QString baiduSpeech = QString(baiduSpeechurl).arg("LAPTOP-71LN9B3Q").arg(accessToken);

    //把文件 转化为QByteArray
    QFile file;
    file.setFileName(filename);
    file.open(QIODevice::ReadOnly);
    requestdata =file.readAll();
    file.close();
    replydata.clear();

    //再次发起http请求
    bool result = httputil.postSyn(baiduSpeech, headers, requestdata, replydata);
    if (result)
    {
        QString key = "result" ;
        QString text = getJsonvalue (replydata, key) ;
        return text;
    }
    else
    {
        QMessageBox::warning(nullptr,"识别提示","识别失败");

    }

    return "";

}

QString Speech::getJsonvalue(QByteArray ba, QString key)
{
    QJsonParseError parseError;
    QJsonDocument jsonDocument = QJsonDocument::fromJson(ba, &parseError);

    if(parseError.error == QJsonParseError::NoError)
    {
        if(jsonDocument.isObject())
        {
            //jsonDocument转换成json对象
            QJsonObject jsonObj = jsonDocument.object() ;
            if (jsonObj.contains (key))
            {
                QJsonValue jsonVal = jsonObj.value(key);
                if (jsonVal.isString())//字符串
                {
                    return jsonVal.toString();
                   }
                else if (jsonVal.isArray()) //数组
                {
                    QJsonArray arr = jsonVal.toArray(); //转换成JsonArray
                    QJsonValue jv = arr.at(0);          //获取第1个元素
                    return jv. toString();
                  }
               }
            }
        }
     return "";
}
