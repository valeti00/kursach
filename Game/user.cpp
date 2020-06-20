#include "user.h"
#include "ui_user.h"

#include <QDesktopWidget>
#include <mainwindow.h>





User::User(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::User)
{
    ui->setupUi(this);





    QDesktopWidget desktop;
    QRect rect = desktop.availableGeometry(this);
    QPoint center = rect.center();
    int x = center.x() - (width()/2);
    int y = center.y() - (height()/2);
    center.setX(x);
    center.setY(y);
    move(center);

    sock = new QTcpSocket(this);



}


User::~User()
{
    delete ui;

}


void User::on_pushButton_clicked()
{

    sock->connectToHost("127.0.0.1",5555, QIODevice::ReadWrite);
    const char*datapointer = ui->lineEdit->displayText().toLocal8Bit().data();
    sock->write(datapointer);
    if (sock->waitForConnected(2000))
    {
        sock->waitForReadyRead(2000);
        auto response = sock->readAll();
        qDebug()<< response;
        if (response == "true")
        {
        emit Podtverdit();
        this->close();
        }
        else
        {
            QMessageBox::warning(this, "_","Ошибка");
        }
    }
    else
    {
        qDebug()<<"Error";
    }


    sock->close();
}
