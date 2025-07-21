#include "audio.h"
#include <QAudioDevice>
#include <QAudioFormat>
#include <QAudioSource>
#include <QMessageBox>
#include <QFile>

Audio::Audio(QObject *parent) : QObject(parent)
{
    m_audioInput = nullptr;
    m_file = nullptr;
}

void Audio::startAudio(QString filename)
{
    // 获取默认音频输入设备
    QAudioDevice audioDevice = QMediaDevices::defaultAudioInput();

    // 判断本地是否有录音设备
    if (!audioDevice.isFormatSupported(QAudioFormat()))
    {
        QMessageBox::warning(nullptr, "QAudioDevice", "录音设备不存在");
        return;
    }

    // 音频编码要求
    QAudioFormat m_format;
    m_format.setSampleRate(16000);
    m_format.setChannelCount(1);

    // 在 Qt 6 中，使用 setSampleFormat 替代 setCodec 和 setByteOrder 等操作
    // 这里设置为 16 位有符号整数采样格式，无需单独设置采样大小
    m_format.setSampleFormat(QAudioFormat::Int16);

    // 验证格式是否支持
    if (!audioDevice.isFormatSupported(m_format))
    {
        m_format = audioDevice.preferredFormat();
        // 或者使用 nearestFormat()，但 Qt6 推荐 preferredFormat()
    }

    // 打开文件
    m_file = new QFile;
    m_file->setFileName(filename);
    if (!m_file->open(QIODevice::WriteOnly))
    {
        QMessageBox::warning(nullptr, "文件错误", "无法打开文件");
        delete m_file;
        m_file = nullptr;
        return;
    }

    // 创建录音对象（Qt6 使用 QAudioSource 替代 QAudioInput）
    m_audioInput = new QAudioSource(audioDevice, m_format, this);
    m_audioInput->start(m_file);
}

void Audio::stopAudio()
{
    if (m_audioInput)
    {
        m_audioInput->stop();
        delete m_audioInput;
        m_audioInput = nullptr;
    }

    if (m_file)
    {
        m_file->close();
        delete m_file;
        m_file = nullptr;
    }
}
