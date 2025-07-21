#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->pushButton->setText("按住说话");

    texttospeech = new    QTextToSpeech;
    texttospeech->setLocale(QLocale::Chinese);  // 设置中文语言
    texttospeech->setRate(0.0);       // 设置语速
    texttospeech->setPitch(0.0);      // 设置音高
    texttospeech->setVolume(0.5);     // 设置音量
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_pressed()
{
     ui->pushButton->setText("松开识别");

     //开始录音
     audio=new Audio;
     audio->startAudio("D:\\1.pcm");
}

void Widget::on_pushButton_released()
{
    //停止录音
    audio->stopAudio();
    //修改按钮文字
    ui->pushButton->setText("开始识别");

    //开始识别
        QString text = m_speech.speechIdentify("D:\\1.pcm");
        if(text != "")
        {
            ui->textEdit->setText(text);
            ui->pushButton->setText("按住说话");
        }
        else
        {
            QMessageBox::warning(nullptr,"错误提示","识别失败");
        }
}


void Widget::on_clearButton_clicked()
{
    ui->textEdit->clear();
}

void Widget::on_start_clicked(bool checked)
{
    if(checked)
    {
        texttospeech->say(ui->textEdit->toPlainText());   // 读取文本内容合成语音
        ui->start->setText("停止朗读");
    }
    else {
        texttospeech->stop();   // 停止朗读
        ui->start->setText("开始朗读");
    }
}

void Widget::on_pause_clicked(bool checked)
{
    if(checked)
    {
        texttospeech->pause();   // 读取文本内容合成语音
        ui->pause->setText("恢复");
    }
    else {
        texttospeech->resume();
        ui->pause->setText("暂停");
    }
}

//设置音速
void Widget::on_rate_valueChanged(double arg1)
{
    texttospeech->setRate(arg1);
}

//设置音高
void Widget::on_pitch_valueChanged(double arg1)
{
    texttospeech->setPitch(arg1);
}

//设置音量
void Widget::on_volume_valueChanged(double arg1)
{
    texttospeech->setVolume(arg1);
}
