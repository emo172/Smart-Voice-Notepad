#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include <QMessageBox>

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);
}

login::~login()
{
    delete ui;
}

//跳转界面
void login::on_pushButton_inlogin_clicked()
{
    // 获取用户输入的手机号和密码
    QString number = ui->lineEdit_number->text();
    QString password = ui->lineEdit_password->text();

    // 检查输入是否为空
    if (number.isEmpty() || password.isEmpty())
    {
        QMessageBox::warning(this, "错误", "手机号和密码不能为空。");
        return;
    }

    // 检查手机号和密码是否匹配预设值
    if (number == "123456789" && password == "123456@qq")
    {
        QMessageBox msg(QMessageBox::Information, "登陆成功", "登录成功", QMessageBox::Yes, this);
        int ret = msg.exec();
        if (ret == QMessageBox::Yes)
        {
            // 创建并显示主窗口，隐藏登录窗口
            MainWindow *m = new MainWindow();
            m->show();
            this->close();
        }
    }
    else
    {
        // 提示登录失败
        QMessageBox::warning(this, "错误", "手机号或密码错误。");
    }
}

//退出界面
void login::on_pushButton_quit_clicked()
{
    this->close();
}

//显示密码
void login::on_checkBox_clicked(bool checked)
{
    if(checked)
       {
           //显示密码  Normal, NoEcho, Password, PasswordEchoOnEdit
           ui->lineEdit_password->setEchoMode(QLineEdit::Normal);
       }
       else
       {
           //隐藏密码  Normal, NoEcho, Password, PasswordEchoOnEdit
            ui->lineEdit_password->setEchoMode(QLineEdit::Password);
       }
}
