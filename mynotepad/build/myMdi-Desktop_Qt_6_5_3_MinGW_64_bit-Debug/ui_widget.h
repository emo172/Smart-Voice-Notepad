/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_2;
    QDoubleSpinBox *rate;
    QDoubleSpinBox *pitch;
    QDoubleSpinBox *volume;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *clearButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *start;
    QPushButton *pause;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(824, 443);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setSpacing(10);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(10, 10, 10, 10);
        frame = new QFrame(Widget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setStyleSheet(QString::fromUtf8("background-color: #f5f5f5;\n"
"border-radius: 5px;"));
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(12);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(15, 15, 15, 15);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"font-weight: 500;"));

        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(frame);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"font-weight: 500;"));

        gridLayout->addWidget(groupBox_3, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"font-weight: 500;"));

        gridLayout->addWidget(groupBox_2, 1, 2, 1, 1);

        rate = new QDoubleSpinBox(frame);
        rate->setObjectName("rate");
        rate->setMinimum(-1.000000000000000);
        rate->setMaximum(1.000000000000000);
        rate->setSingleStep(0.100000000000000);
        rate->setStyleSheet(QString::fromUtf8("padding: 5px;\n"
"border: 1px solid #ccc;\n"
"border-radius: 3px;"));

        gridLayout->addWidget(rate, 2, 0, 1, 1);

        pitch = new QDoubleSpinBox(frame);
        pitch->setObjectName("pitch");
        pitch->setMinimum(-1.000000000000000);
        pitch->setMaximum(1.000000000000000);
        pitch->setSingleStep(0.100000000000000);
        pitch->setStyleSheet(QString::fromUtf8("padding: 5px;\n"
"border: 1px solid #ccc;\n"
"border-radius: 3px;"));

        gridLayout->addWidget(pitch, 2, 1, 1, 1);

        volume = new QDoubleSpinBox(frame);
        volume->setObjectName("volume");
        volume->setMinimum(-1.000000000000000);
        volume->setMaximum(1.000000000000000);
        volume->setSingleStep(0.100000000000000);
        volume->setValue(0.500000000000000);
        volume->setStyleSheet(QString::fromUtf8("padding: 5px;\n"
"border: 1px solid #ccc;\n"
"border-radius: 3px;"));

        gridLayout->addWidget(volume, 2, 2, 1, 1);

        textEdit = new QTextEdit(frame);
        textEdit->setObjectName("textEdit");
        textEdit->setStyleSheet(QString::fromUtf8("border: 1px solid #ccc;\n"
"border-radius: 3px;\n"
"padding: 8px;"));

        gridLayout->addWidget(textEdit, 3, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("padding: 6px 12px;\n"
"background-color: #f0f0f0;\n"
"border: 1px solid #ccc;\n"
"border-radius: 3px;\n"
"font-size: 13px;\n"
"font-weight: 500;\n"
"min-width: 80px;"));

        horizontalLayout->addWidget(pushButton);

        clearButton = new QPushButton(frame);
        clearButton->setObjectName("clearButton");
        clearButton->setStyleSheet(QString::fromUtf8("padding: 6px 12px;\n"
"background-color: #f0f0f0;\n"
"border: 1px solid #ccc;\n"
"border-radius: 3px;\n"
"font-size: 13px;\n"
"font-weight: 500;\n"
"min-width: 80px;"));

        horizontalLayout->addWidget(clearButton);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        start = new QPushButton(frame);
        start->setObjectName("start");
        start->setCheckable(true);
        start->setStyleSheet(QString::fromUtf8("padding: 6px 12px;\n"
"background-color: #e8f4fd;\n"
"border: 1px solid #2196f3;\n"
"border-radius: 3px;\n"
"color: #2196f3;\n"
"font-size: 13px;\n"
"font-weight: 500;\n"
"min-width: 80px;"));

        horizontalLayout_2->addWidget(start);

        pause = new QPushButton(frame);
        pause->setObjectName("pause");
        pause->setCheckable(true);
        pause->setStyleSheet(QString::fromUtf8("padding: 6px 12px;\n"
"background-color: #ffebee;\n"
"border: 1px solid #f44336;\n"
"border-radius: 3px;\n"
"color: #f44336;\n"
"font-size: 13px;\n"
"font-weight: 500;\n"
"min-width: 80px;"));

        horizontalLayout_2->addWidget(pause);


        gridLayout->addLayout(horizontalLayout_2, 5, 0, 1, 3);

        label = new QLabel(frame);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);
        label->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;\n"
"color: #333;\n"
"padding: 10px 0;"));

        gridLayout->addWidget(label, 0, 0, 1, 3);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\350\257\255\351\237\263\350\257\206\345\210\253\345\212\251\346\211\213", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\350\257\255\351\200\237", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\351\237\263\351\253\230", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\351\237\263\351\207\217", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\350\257\255\351\237\263\350\276\223\345\205\245", nullptr));
        clearButton->setText(QCoreApplication::translate("Widget", "\346\270\205\351\231\244", nullptr));
        start->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213\346\234\227\350\257\273", nullptr));
        pause->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\346\234\227\350\257\273", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\350\257\255\351\237\263\350\257\206\345\210\253\345\212\251\346\211\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
