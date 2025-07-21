#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_checkBox_clicked(bool checked);
    void on_pushButton_inlogin_clicked();
    void on_pushButton_quit_clicked();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
