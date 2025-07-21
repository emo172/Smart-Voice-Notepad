#ifndef AUDIO_H
#define AUDIO_H

#include <QObject>
#include <QAudioFormat>
#include <QMediaDevices>
#include <QMessageBox>
#include <QAudioSource>
#include <QFile>

class Audio : public QObject
{
    Q_OBJECT
public:
    explicit Audio(QObject *parent = nullptr);

    void startAudio(QString filename);   // 开始录音
    void stopAudio();                    // 停止录音

signals:

private:
    QAudioSource *m_audioInput;
    QFile   *m_file;

public slots:
};

#endif // AUDIO_H
