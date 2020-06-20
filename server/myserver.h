#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QTime>
#include <fstream>
#include <QThread>

class myserver: public QTcpServer

{
    Q_OBJECT
public:
    myserver();
    ~myserver();

    QTcpSocket *sock;
    QTcpSocket* socket;
    QByteArray Data;
    QByteArray Otvet;


public slots:
    void startServer();
    void incomingConnection(qintptr socketDescriptor);
    void sockReady();

};
#endif // MYSERVER_H
