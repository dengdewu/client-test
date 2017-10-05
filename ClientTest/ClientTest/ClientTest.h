#pragma once

#include <QtWidgets/QWidget>
#include "ui_ClientTest.h"
#include <QTcpSocket>

class ClientTest : public QWidget
{
	Q_OBJECT

public:
	ClientTest(QWidget *parent = Q_NULLPTR);

private:
	Ui::ClientTestClass ui;
	QTcpSocket * tcpsocket;
	
private slots:
   void readMsg();
   void onclicked();
};
