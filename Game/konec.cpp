#include "konec.h"
#include "ui_konec.h"
#include <QDesktopWidget>
#include <QWidget>

Pobeda::Pobeda(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pobeda)
{
    ui->setupUi(this);


    time = new QTime(0,0,0);
    tmr = new QTimer(this); // Создаем объект класса QTimer и передаем адрес переменной
    tmr->setInterval(1000); // Задаем интервал таймера
    connect(tmr, SIGNAL(timeout()), this, SLOT(updateTime())); // Подключаем сигнал таймера к нашему слоту
    tmr->start(); // Запускаем таймер


    QPixmap pix(":/pict/pict/pict2.png");
    ui->label_pict->setPixmap(pix);

    Pobeda::ui->pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 200, 94);"
                                                                "font-size: 36px;height: 48px;width: 120px;"
                                                                "border: 3px solid #828282"));
    Pobeda::ui->pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 200, 94);"
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

    int width = QApplication::desktop()->width();
    int height = QApplication::desktop()->height();
    if (width > height)
    {
        resize(768, 800);
    }
    else
        {
            resize(width, height/2);
        }



}

Pobeda::~Pobeda()
{
    delete ui;
}


void Pobeda::updateTime()
{
   *time = time->addSecs(1);
   ui->label5->setText(time->toString());
}


void Pobeda::on_pushButton_clicked()
{
    emit menu3(); // И вызываем сигнал на открытие третьего окна
    this->close();      // Закрываем окно

}


void Pobeda::on_pushButton_2_clicked()
{
    tmr->stop();
}
