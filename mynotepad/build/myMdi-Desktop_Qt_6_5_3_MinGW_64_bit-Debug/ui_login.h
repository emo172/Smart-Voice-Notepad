/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_1;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_inlogin;
    QPushButton *pushButton_quit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_number;
    QLineEdit *lineEdit_number;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_2;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(700, 580);
        gridLayout_4 = new QGridLayout(login);
        gridLayout_4->setObjectName("gridLayout_4");
        frame = new QFrame(login);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout_1 = new QGridLayout();
        gridLayout_1->setSpacing(15);
        gridLayout_1->setObjectName("gridLayout_1");
        gridLayout_1->setContentsMargins(10, 10, 10, 10);
        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_1->addItem(verticalSpacer_2, 11, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_1->addItem(verticalSpacer, 0, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        pushButton_inlogin = new QPushButton(frame);
        pushButton_inlogin->setObjectName("pushButton_inlogin");
        pushButton_inlogin->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 100, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 6px;\n"
"padding: 8px;\n"
"font-size: 14px;\n"
"font-weight: 500;"));

        horizontalLayout->addWidget(pushButton_inlogin);

        pushButton_quit = new QPushButton(frame);
        pushButton_quit->setObjectName("pushButton_quit");
        pushButton_quit->setStyleSheet(QString::fromUtf8("background-color: rgb(180, 180, 180);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 6px;\n"
"padding: 8px;\n"
"font-size: 14px;\n"
"font-weight: 500;"));

        horizontalLayout->addWidget(pushButton_quit);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        gridLayout_1->addLayout(horizontalLayout, 10, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(10);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(10, 10, 10, 10);
        label_password = new QLabel(frame);
        label_password->setObjectName("label_password");
        label_password->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"font-weight: 500;"));
        label_password->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_password);

        lineEdit_password = new QLineEdit(frame);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setEchoMode(QLineEdit::Password);
        lineEdit_password->setStyleSheet(QString::fromUtf8("border: 1px solid #CCCCCC;\n"
"border-radius: 4px;\n"
"padding: 8px;\n"
"font-size: 14px;"));

        horizontalLayout_8->addWidget(lineEdit_password);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 4);

        gridLayout_1->addLayout(horizontalLayout_8, 8, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(10, 10, 10, 10);
        label_number = new QLabel(frame);
        label_number->setObjectName("label_number");
        label_number->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"font-weight: 500;"));
        label_number->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_number);

        lineEdit_number = new QLineEdit(frame);
        lineEdit_number->setObjectName("lineEdit_number");
        lineEdit_number->setStyleSheet(QString::fromUtf8("border: 1px solid #CCCCCC;\n"
"border-radius: 4px;\n"
"padding: 8px;\n"
"font-size: 14px;"));

        horizontalLayout_2->addWidget(lineEdit_number);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 4);

        gridLayout_1->addLayout(horizontalLayout_2, 5, 1, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(5);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(60, 5, 10, 5);
        checkBox = new QCheckBox(frame);
        checkBox->setObjectName("checkBox");
        checkBox->setStyleSheet(QString::fromUtf8("font-size: 13px;"));

        horizontalLayout_9->addWidget(checkBox);


        gridLayout_1->addLayout(horizontalLayout_9, 9, 1, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(5);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(10, 30, 10, 30);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font-size: 22px;\n"
"font-weight: bold;"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_2);


        gridLayout_1->addLayout(horizontalLayout_10, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_1, 0, 0, 1, 1);

        gridLayout->setColumnMinimumWidth(0, 1);

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        pushButton_inlogin->setText(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        pushButton_quit->setText(QCoreApplication::translate("login", "\351\200\200\345\207\272", nullptr));
        label_password->setText(QCoreApplication::translate("login", "\345\257\206   \347\240\201\357\274\232", nullptr));
        lineEdit_password->setText(QCoreApplication::translate("login", "123456@qq", nullptr));
        label_number->setText(QCoreApplication::translate("login", "\346\211\213\346\234\272\345\217\267\357\274\232", nullptr));
        lineEdit_number->setText(QCoreApplication::translate("login", "123456789", nullptr));
        checkBox->setText(QCoreApplication::translate("login", "\346\230\276\347\244\272\345\257\206\347\240\201", nullptr));
        label_2->setText(QCoreApplication::translate("login", "\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
