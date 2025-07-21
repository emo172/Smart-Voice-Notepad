#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <audio.h>
#include "speech.h"
#include <QtTextToSpeech/QTextToSpeech>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_pressed();
    void on_pushButton_released();

    void on_clearButton_clicked();

    void on_start_clicked(bool checked);

    void on_pause_clicked(bool checked);

    void on_rate_valueChanged(double arg1);

    void on_pitch_valueChanged(double arg1);

    void on_volume_valueChanged(double arg1);

private:
    Ui::Widget *ui;
    Audio *audio;     //创建录音设备对象
    Speech m_speech;

    QTextToSpeech *texttospeech;
};

#endif // WIDGET_H
