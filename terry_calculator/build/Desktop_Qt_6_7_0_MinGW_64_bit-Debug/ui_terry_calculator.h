/********************************************************************************
** Form generated from reading UI file 'terry_calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERRY_CALCULATOR_H
#define UI_TERRY_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_terry_calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Clear;
    QPushButton *Multiply;
    QPushButton *MemAdd;
    QPushButton *Add;
    QPushButton *Button0;
    QPushButton *MemClear;
    QPushButton *Button6;
    QPushButton *Button9;
    QPushButton *Equals;
    QPushButton *Divide;
    QPushButton *Button5;
    QPushButton *Button2;
    QPushButton *Subtract;
    QPushButton *Button1;
    QPushButton *Button7;
    QPushButton *Button8;
    QLineEdit *Display;
    QPushButton *Button3;
    QPushButton *MemGet;
    QPushButton *Button4;
    QPushButton *ChangeNumberSign;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QMainWindow *terry_calculator)
    {
        if (terry_calculator->objectName().isEmpty())
            terry_calculator->setObjectName("terry_calculator");
        terry_calculator->resize(444, 428);
        centralwidget = new QWidget(terry_calculator);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        Clear = new QPushButton(centralwidget);
        buttonGroup = new QButtonGroup(terry_calculator);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(Clear);
        Clear->setObjectName("Clear");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setStyleSheet(QString::fromUtf8("\n"
"QPushButton.buttonGroup {\n"
"	background-color: #4c4c4c;\n"
"\n"
"	border: 1px solid gray;\n"
"	border-radius: 30%;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"QPushButton.buttonGroup:hover {\n"
"	background-color: #737373;\n"
"	background-radius: 30%;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton.buttonGroup:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	border-radius: 30px;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"\n"
""));

        gridLayout->addWidget(Clear, 6, 0, 1, 1);

        Multiply = new QPushButton(centralwidget);
        buttonGroup_2 = new QButtonGroup(terry_calculator);
        buttonGroup_2->setObjectName("buttonGroup_2");
        buttonGroup_2->addButton(Multiply);
        Multiply->setObjectName("Multiply");
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setAutoFillBackground(false);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton.buttonGroup_2 {\n"
"	background-color: #66cd00;\n"
"	border: 1px solid gray;\n"
"	\n"
"	padding: 5px;\n"
"	border-radius: 30px;\n"
"}	\n"
"\n"
"QPushButton.buttonGroup_2:hover {\n"
"	background-color: #737373;\n"
"	\n"
"	padding: 5px;\n"
"	border-radius: 30%;\n"
"}\n"
"\n"
"\n"
"QPushButton.buttonGroup_2:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	border-radius: 30px;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"\n"
""));

        gridLayout->addWidget(Multiply, 4, 3, 1, 1);

        MemAdd = new QPushButton(centralwidget);
        buttonGroup_2->addButton(MemAdd);
        MemAdd->setObjectName("MemAdd");
        sizePolicy.setHeightForWidth(MemAdd->sizePolicy().hasHeightForWidth());
        MemAdd->setSizePolicy(sizePolicy);
        MemAdd->setAutoFillBackground(false);
        MemAdd->setStyleSheet(QString::fromUtf8("QPushButton.buttonGroup_2 {\n"
"	background-color: #66cd00;\n"
"	border: 1px solid gray;\n"
"	\n"
"	padding: 5px;\n"
"	border-radius: 30px;\n"
"}	\n"
"\n"
"QPushButton.buttonGroup_2:hover {\n"
"	background-color: #737373;\n"
"	\n"
"	padding: 5px;\n"
"	border-radius: 30%;\n"
"}\n"
"\n"
"\n"
"QPushButton.buttonGroup_2:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	border-radius: 30px;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"\n"
""));

        gridLayout->addWidget(MemAdd, 3, 4, 1, 1);

        Add = new QPushButton(centralwidget);
        buttonGroup_2->addButton(Add);
        Add->setObjectName("Add");
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setAutoFillBackground(false);
        Add->setStyleSheet(QString::fromUtf8("QPushButton.buttonGroup_2 {\n"
"	background-color: #66cd00;\n"
"	border: 1px solid gray;\n"
"	\n"
"	padding: 5px;\n"
"	border-radius: 30px;\n"
"}	\n"
"\n"
"QPushButton.buttonGroup_2:hover {\n"
"	background-color: #737373;\n"
"	\n"
"	padding: 5px;\n"
"	border-radius: 30%;\n"
"}\n"
"\n"
"\n"
"QPushButton.buttonGroup_2:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	border-radius: 30px;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"\n"
""));

        gridLayout->addWidget(Add, 5, 3, 1, 1);

        Button0 = new QPushButton(centralwidget);
        buttonGroup->addButton(Button0);
        Button0->setObjectName("Button0");
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setStyleSheet(QString::fromUtf8("\n"
"QPushButton.buttonGroup {\n"
"	background-color: #4c4c4c;\n"
"\n"
"	border: 1px solid gray;\n"
"	border-radius: 30%;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"QPushButton.buttonGroup:hover {\n"
"	background-color: #737373;\n"
"	background-radius: 30%;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton.buttonGroup:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	border-radius: 30px;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"\n"
""));

        gridLayout->addWidget(Button0, 6, 1, 1, 1);

        MemClear = new QPushButton(centralwidget);
        buttonGroup_2->addButton(MemClear);
        MemClear->setObjectName("MemClear");
        sizePolicy.setHeightForWidth(MemClear->sizePolicy().hasHeightForWidth());
        MemClear->setSizePolicy(sizePolicy);
        MemClear->setAutoFillBackground(false);
        MemClear->setStyleSheet(QString::fromUtf8("QPushButton.buttonGroup_2 {\n"
"	background-color: #66cd00;\n"
"	border: 1px solid gray;\n"
"	\n"
"	padding: 5px;\n"
"	border-radius: 30px;\n"
"}	\n"
"\n"
"QPushButton.buttonGroup_2:hover {\n"
"	background-color: #737373;\n"
"	\n"
"	padding: 5px;\n"
"	border-radius: 30%;\n"
"}\n"
"\n"
"\n"
"QPushButton.buttonGroup_2:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	border-radius: 30px;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"\n"
""));

        gridLayout->addWidget(MemClear, 4, 4, 1, 1);

        Button6 = new QPushButton(centralwidget);
        buttonGroup->addButton(Button6);
        Button6->setObjectName("Button6");
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setStyleSheet(QString::fromUtf8("\n"
"QPushButton.buttonGroup {\n"
"	background-color: #4c4c4c;\n"
"\n"
"	border: 1px solid gray;\n"
"	border-radius: 30%;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"QPushButton.buttonGroup:hover {\n"
"	background-color: #737373;\n"
"	background-radius: 30%;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton.buttonGroup:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	border-radius: 30px;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"\n"
""));

        gridLayout->addWidget(Button6, 4, 2, 1, 1);

        Button9 = new QPushButton(centralwidget);
        buttonGroup->addButton(Button9);
        Button9->setObjectName("Button9");
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setStyleSheet(QString::fromUtf8("\n"
"QPushButton.buttonGroup {\n"
"	background-color: #4c4c4c;\n"
"\n"
"	border: 1px solid gray;\n"
"	border-radius: 30%;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"QPushButton.buttonGroup:hover {\n"
"	background-color: #737373;\n"
"	background-radius: 30%;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton.buttonGroup:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	border-radius: 30px;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"\n"
""));

        gridLayout->addWidget(Button9, 3, 2, 1, 1);

        Equals = new QPushButton(centralwidget);
        buttonGroup_2->addButton(Equals);
        Equals->setObjectName("Equals");
        sizePolicy.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy);
        Equals->setAutoFillBackground(false);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton.buttonGroup_2 {\n"
"	background-color: #66cd00;\n"
"	border: 1px solid gray;\n"
"	\n"
"	padding: 5px;\n"
"	border-radius: 30px;\n"
"}	\n"
"\n"
"QPushButton.buttonGroup_2:hover {\n"
"	background-color: #737373;\n"
"	\n"
"	padding: 5px;\n"
"	border-radius: 30%;\n"
"}\n"
"\n"
"\n"
"QPushButton.buttonGroup_2:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	border-radius: 30px;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"\n"
""));

        gridLayout->addWidget(Equals, 6, 4, 1, 1);

        Divide = new QPushButton(centralwidget);
        buttonGroup_2->addButton(Divide);
        Divide->setObjectName("Divide");
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setAutoFillBackground(false);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton.buttonGroup_2 {\n"
"	background-color: #66cd00;\n"
"	border: 1px solid gray;\n"
"	\n"
"	padding: 5px;\n"
"	border-radius: 30px;\n"
"}	\n"
"\n"
"QPushButton.buttonGroup_2:hover {\n"
"	background-color: #737373;\n"
"	\n"
"	padding: 5px;\n"
"	border-radius: 30%;\n"
"}\n"
"\n"
"\n"
"QPushButton.buttonGroup_2:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	border-radius: 30px;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"\n"
""));

        gridLayout->addWidget(Divide, 3, 3, 1, 1);

        Button5 = new QPushButton(centralwidget);
        buttonGroup->addButton(Button5);
        Button5->setObjectName("Button5");
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setStyleSheet(QString::fromUtf8("\n"
"QPushButton.buttonGroup {\n"
"	background-color: #4c4c4c;\n"
"\n"
"	border: 1px solid gray;\n"
"	border-radius: 30%;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"QPushButton.buttonGroup:hover {\n"
"	background-color: #737373;\n"
"	background-radius: 30%;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton.buttonGroup:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	border-radius: 30px;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"\n"
""));

        gridLayout->addWidget(Button5, 4, 1, 1, 1);

        Button2 = new QPushButton(centralwidget);
        buttonGroup->addButton(Button2);
        Button2->setObjectName("Button2");
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton.buttonGroup {\n"
"	background-color: #4c4c4c;\n"
"\n"
"	border: 1px solid gray;\n"
"	border-radius: 30%;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"QPushButton.buttonGroup:hover {\n"
"	background-color: #737373;\n"
"	background-radius: 30%;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton.buttonGroup:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	border-radius: 30px;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"\n"
""));

        gridLayout->addWidget(Button2, 5, 1, 1, 1);

        Subtract = new QPushButton(centralwidget);
        buttonGroup_2->addButton(Subtract);
        Subtract->setObjectName("Subtract");
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setAutoFillBackground(false);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton.buttonGroup_2 {\n"
"	background-color: #66cd00;\n"
"	border: 1px solid gray;\n"
"	\n"
"	padding: 5px;\n"
"	border-radius: 30px;\n"
"}	\n"
"\n"
"QPushButton.buttonGroup_2:hover {\n"
"	background-color: #737373;\n"
"	\n"
"	padding: 5px;\n"
"	border-radius: 30%;\n"
"}\n"
"\n"
"\n"
"QPushButton.buttonGroup_2:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	border-radius: 30px;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"\n"
""));

        gridLayout->addWidget(Subtract, 6, 3, 1, 1);

        Button1 = new QPushButton(centralwidget);
        buttonGroup->addButton(Button1);
        Button1->setObjectName("Button1");
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setStyleSheet(QString::fromUtf8("\n"
"QPushButton.buttonGroup {\n"
"	background-color: #4c4c4c;\n"
"\n"
"	border: 1px solid gray;\n"
"	border-radius: 30%;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"QPushButton.buttonGroup:hover {\n"
"	background-color: #737373;\n"
"	background-radius: 30%;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton.buttonGroup:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	border-radius: 30px;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"\n"
""));

        gridLayout->addWidget(Button1, 5, 0, 1, 1);

        Button7 = new QPushButton(centralwidget);
        buttonGroup->addButton(Button7);
        Button7->setObjectName("Button7");
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setStyleSheet(QString::fromUtf8("\n"
"QPushButton.buttonGroup {\n"
"	background-color: #4c4c4c;\n"
"\n"
"	border: 1px solid gray;\n"
"	border-radius: 30%;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"QPushButton.buttonGroup:hover {\n"
"	background-color: #737373;\n"
"	background-radius: 30%;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton.buttonGroup:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	border-radius: 30px;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"\n"
""));

        gridLayout->addWidget(Button7, 3, 0, 1, 1);

        Button8 = new QPushButton(centralwidget);
        buttonGroup->addButton(Button8);
        Button8->setObjectName("Button8");
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setStyleSheet(QString::fromUtf8("\n"
"QPushButton.buttonGroup {\n"
"	background-color: #4c4c4c;\n"
"\n"
"	border: 1px solid gray;\n"
"	border-radius: 30%;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"QPushButton.buttonGroup:hover {\n"
"	background-color: #737373;\n"
"	background-radius: 30%;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton.buttonGroup:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	border-radius: 30px;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"\n"
""));

        gridLayout->addWidget(Button8, 3, 1, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName("Display");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(18);
        font.setBold(true);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	padding: #ffffff;\n"
"}	\n"
""));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        Button3 = new QPushButton(centralwidget);
        buttonGroup->addButton(Button3);
        Button3->setObjectName("Button3");
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton.buttonGroup {\n"
"	background-color: #4c4c4c;\n"
"\n"
"	border: 1px solid gray;\n"
"	border-radius: 30%;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"QPushButton.buttonGroup:hover {\n"
"	background-color: #737373;\n"
"	background-radius: 30%;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton.buttonGroup:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	border-radius: 30px;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"\n"
""));

        gridLayout->addWidget(Button3, 5, 2, 1, 1);

        MemGet = new QPushButton(centralwidget);
        buttonGroup_2->addButton(MemGet);
        MemGet->setObjectName("MemGet");
        sizePolicy.setHeightForWidth(MemGet->sizePolicy().hasHeightForWidth());
        MemGet->setSizePolicy(sizePolicy);
        MemGet->setAutoFillBackground(false);
        MemGet->setStyleSheet(QString::fromUtf8("QPushButton.buttonGroup_2 {\n"
"	background-color: #66cd00;\n"
"	border: 1px solid gray;\n"
"	\n"
"	padding: 5px;\n"
"	border-radius: 30px;\n"
"}	\n"
"\n"
"QPushButton.buttonGroup_2:hover {\n"
"	background-color: #737373;\n"
"	\n"
"	padding: 5px;\n"
"	border-radius: 30%;\n"
"}\n"
"\n"
"\n"
"QPushButton.buttonGroup_2:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	border-radius: 30px;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"\n"
""));

        gridLayout->addWidget(MemGet, 5, 4, 1, 1);

        Button4 = new QPushButton(centralwidget);
        buttonGroup->addButton(Button4);
        Button4->setObjectName("Button4");
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setStyleSheet(QString::fromUtf8("\n"
"QPushButton.buttonGroup {\n"
"	background-color: #4c4c4c;\n"
"\n"
"	border: 1px solid gray;\n"
"	border-radius: 30%;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"QPushButton.buttonGroup:hover {\n"
"	background-color: #737373;\n"
"	background-radius: 30%;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton.buttonGroup:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	border-radius: 30px;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"\n"
""));

        gridLayout->addWidget(Button4, 4, 0, 1, 1);

        ChangeNumberSign = new QPushButton(centralwidget);
        buttonGroup->addButton(ChangeNumberSign);
        ChangeNumberSign->setObjectName("ChangeNumberSign");
        sizePolicy.setHeightForWidth(ChangeNumberSign->sizePolicy().hasHeightForWidth());
        ChangeNumberSign->setSizePolicy(sizePolicy);
        ChangeNumberSign->setStyleSheet(QString::fromUtf8("\n"
"QPushButton.buttonGroup {\n"
"	background-color: #4c4c4c;\n"
"\n"
"	border: 1px solid gray;\n"
"	border-radius: 30%;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"QPushButton.buttonGroup:hover {\n"
"	background-color: #737373;\n"
"	background-radius: 30%;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton.buttonGroup:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	border-radius: 30px;\n"
"	padding: 5px;\n"
"}	\n"
"\n"
"\n"
""));

        gridLayout->addWidget(ChangeNumberSign, 6, 2, 1, 1);

        terry_calculator->setCentralWidget(centralwidget);
        Button4->raise();
        Button6->raise();
        Button5->raise();
        Divide->raise();
        Button7->raise();
        MemClear->raise();
        Button8->raise();
        Multiply->raise();
        Button9->raise();
        MemAdd->raise();
        Button1->raise();
        Clear->raise();
        Button0->raise();
        Button2->raise();
        Button3->raise();
        ChangeNumberSign->raise();
        Subtract->raise();
        MemGet->raise();
        Equals->raise();
        Display->raise();
        Add->raise();
        menubar = new QMenuBar(terry_calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 444, 21));
        terry_calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(terry_calculator);
        statusbar->setObjectName("statusbar");
        terry_calculator->setStatusBar(statusbar);

        retranslateUi(terry_calculator);

        QMetaObject::connectSlotsByName(terry_calculator);
    } // setupUi

    void retranslateUi(QMainWindow *terry_calculator)
    {
        terry_calculator->setWindowTitle(QCoreApplication::translate("terry_calculator", "terry_calculator", nullptr));
        Clear->setText(QCoreApplication::translate("terry_calculator", "AC", nullptr));
        Multiply->setText(QCoreApplication::translate("terry_calculator", "*", nullptr));
        MemAdd->setText(QCoreApplication::translate("terry_calculator", "M+", nullptr));
        Add->setText(QCoreApplication::translate("terry_calculator", "+", nullptr));
        Button0->setText(QCoreApplication::translate("terry_calculator", "0", nullptr));
        MemClear->setText(QCoreApplication::translate("terry_calculator", "M-", nullptr));
        Button6->setText(QCoreApplication::translate("terry_calculator", "6", nullptr));
        Button9->setText(QCoreApplication::translate("terry_calculator", "9", nullptr));
        Equals->setText(QCoreApplication::translate("terry_calculator", "=", nullptr));
        Divide->setText(QCoreApplication::translate("terry_calculator", "/", nullptr));
        Button5->setText(QCoreApplication::translate("terry_calculator", "5", nullptr));
        Button2->setText(QCoreApplication::translate("terry_calculator", "2", nullptr));
        Subtract->setText(QCoreApplication::translate("terry_calculator", "-", nullptr));
        Button1->setText(QCoreApplication::translate("terry_calculator", "1", nullptr));
        Button7->setText(QCoreApplication::translate("terry_calculator", "7", nullptr));
        Button8->setText(QCoreApplication::translate("terry_calculator", "8", nullptr));
        Display->setText(QCoreApplication::translate("terry_calculator", "0.0", nullptr));
        Button3->setText(QCoreApplication::translate("terry_calculator", "3", nullptr));
        MemGet->setText(QCoreApplication::translate("terry_calculator", "M", nullptr));
        Button4->setText(QCoreApplication::translate("terry_calculator", "4", nullptr));
        ChangeNumberSign->setText(QCoreApplication::translate("terry_calculator", "+/-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class terry_calculator: public Ui_terry_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERRY_CALCULATOR_H
