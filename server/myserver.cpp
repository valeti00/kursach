#include "myserver.h"

myserver::myserver(){}

myserver::~myserver(){}

void myserver::startServer()
{
    if (this->listen(QHostAddress::Any,5555))
    {
        qDebug()<<"Listening";
    }
    else
    {
        qDebug()<<"Not listening";
    }
}

void myserver::incomingConnection(qintptr socketDescriptor)
{

        setlocale( LC_ALL,"Russian" );

       sock = new QTcpSocket(this);
       sock->setSocketDescriptor(socketDescriptor);

           connect(sock,SIGNAL(readyRead()),this,SLOT(sockReady()));




}

void myserver::sockReady()
{
    Otvet = sock->readAll();
    std::string response = "false";
    std::string login = "valeti";
    if (Otvet.toStdString()==login){
               response = "true";
               sock->write(response.c_str());
               qDebug()<< QTime::currentTime()<<"Username: "<<Otvet;
    }
    else {
         qDebug()<<"Error";
    }


}


