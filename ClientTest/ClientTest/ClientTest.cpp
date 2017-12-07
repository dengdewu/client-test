#include "ClientTest.h"
#include <QHostAddress>
#include <QDataStream>
#include <QTcpSocket>
//Test string
//Test string 2
ClientTest::ClientTest(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	tcpsocket = new QTcpSocket(this);
	connect(tcpsocket, SIGNAL(readyRead()), this, SLOT(readMsg()));
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(onclicked()));
	tcpsocket->connectToHost(QHostAddress("192.168.1.23"),5353);
}
void ClientTest::onclicked()
{
	qDebug() << "**********pushbutton clicked*************";
	QByteArray DataSend;
	QDataStream SendOut(&DataSend, QIODevice::WriteOnly);
	//�������汾
	SendOut.setVersion(QDataStream::Qt_4_8);
	SendOut.device()->seek(0);
	//�����˺�����
	SendOut << qint16(0) << 1 << ui.lineEdit->text() << ui.lineEdit_2->text();
	//�������ݱ���������
	SendOut.device()->seek(0);
	SendOut << qint16(DataSend.size());
	qDebug() << qint16(DataSend.size()) << "*****************";
	tcpsocket->write(DataSend);
	DataSend.resize(0);
}

void ClientTest::readMsg() 
{
	QDataStream in(tcpsocket);
	in.setVersion(QDataStream::Qt_4_8);
	qint16  MessageBlock = 0;
	if (MessageBlock == 0)
	{
		if (tcpsocket->bytesAvailable() < (int)sizeof(quint16))
			return;
		in >> MessageBlock;
	}

	if (tcpsocket->bytesAvailable() < MessageBlock)
		return;
	QString string;
	in >> string;
	qDebug() << "**********string*********";
}