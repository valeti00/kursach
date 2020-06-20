#include "anotherwindow.h"
#include "ui_anotherwindow.h"

#include <QDesktopWidget>




Start::Start(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Start)
{
    ui->setupUi(this);

    time = new QTime(0,0,-1);
    tmr = new QTimer(this); // Создаем объект класса QTimer и передаем адрес переменной
    tmr->setInterval(1000); // Задаем интервал таймера
    connect(tmr, SIGNAL(timeout()), this, SLOT(updateTime())); // Подключаем сигнал таймера к нашему слоту
    tmr->start(); // Запускаем таймер


     QPixmap pix(":/pict/pict/pict2.png");
    ui->label_pict->setPixmap(pix);

    Start::ui->pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 200, 94);"
                                                                "font-size: 36px;height: 48px;width: 120px;"
                                                                "border: 3px solid #828282"));

    Start::ui->pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 200, 94);"
                                                                "font-size: 36px;height: 48px;width: 120px;"
                                                                "border: 3px solid #828282"));



    QDesktopWidget desktop;
    QRect rect = desktop.availableGeometry(this);
    QPoint center = rect.center();
    int x = center.x() - (width()/2);
    int y = center.y() - (height()/2);
    center.setX(x);
    center.setY(y);
    move(center);

}


Start::~Start()
{
    delete ui;

}

void Start::updateTime()
{
   *time = time->addSecs(1);
   ui->label5->setText(time->toString());
}



void Start::on_pushButton_clicked()
{



    emit Window2Signal_ShowThirdWindow();
    this->close();

}

void Start::on_pushButton_2_clicked()
{
    emit Singallevo();
   this->close();

}


