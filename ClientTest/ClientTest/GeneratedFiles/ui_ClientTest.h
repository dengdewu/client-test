/********************************************************************************
** Form generated from reading UI file 'ClientTest.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTTEST_H
#define UI_CLIENTTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientTestClass
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QWidget *ClientTestClass)
    {
        if (ClientTestClass->objectName().isEmpty())
            ClientTestClass->setObjectName(QStringLiteral("ClientTestClass"));
        ClientTestClass->resize(600, 400);
        lineEdit = new QLineEdit(ClientTestClass);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(170, 90, 271, 25));
        lineEdit_2 = new QLineEdit(ClientTestClass);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 150, 271, 25));
        pushButton = new QPushButton(ClientTestClass);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 230, 112, 34));

        retranslateUi(ClientTestClass);

        QMetaObject::connectSlotsByName(ClientTestClass);
    } // setupUi

    void retranslateUi(QWidget *ClientTestClass)
    {
        ClientTestClass->setWindowTitle(QApplication::translate("ClientTestClass", "ClientTest", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ClientTestClass", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClientTestClass: public Ui_ClientTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTTEST_H
