#include "zagadka2.h"
#include "ui_zagadka2.h"
#include <QDesktopWidget>

Zagad2::Zagad2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Zagad2)
{
    ui->setupUi(this);

    time = new QTime(0,0,0);
    tmr = new QTimer(this); // Создаем объект класса QTimer и передаем адрес переменной
    tmr->setInterval(1000); // Задаем интервал таймера
    connect(tmr, SIGNAL(timeout()), this, SLOT(updateTime())); // Подключаем сигнал таймера к нашему слоту
    tmr->start(); // Запускаем таймер

    QPixmap pix(":/pict/pict/pict2.png");
    ui->label_pict->setPixmap(pix);

    Zagad2::ui->pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 200, 94);"
                                                                "font-size: 36px;height: 48px;width: 120px;"
                                                                "border: 3px solid #828282"));

    Zagad2::ui->pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 200, 94);"
                                                                "font-size: 36px;height: 48px;width: 120px;"
                                                                "border: 3px solid #828282"));

    Zagad2::ui->pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 200, 94);"
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

Zagad2::~Zagad2()
{
    delete ui;
}

void Zagad2::updateTime()
{
   *time = time->addSecs(1);
   ui->label5->setText(time->toString());
}


void Zagad2::on_pushButton_clicked()
{
    emit pravilno2(); // И вызываем сигнал на открытие третьего окна
    this->close();      // Закрываем окно

}

void Zagad2::on_pushButton_2_clicked()
{
    emit oshibka3();
    this->close();
}

void Zagad2::on_pushButton_3_clicked()
{
    emit oshibka4();
    this->close();
}
