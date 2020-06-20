#ifndef STENA1_H
#define STENA1_H

#include <QWidget>
#include <QTime>
#include <QTimer>

namespace Ui {
class Razv;
}

class Razv : public QWidget
{
    Q_OBJECT

public:
    explicit Razv(QWidget *parent = nullptr);
    ~Razv();

signals:
   void oknotri();

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

     void updateTime();

private:
    Ui::Razv *ui;
    QTimer *tmr;
    QTime *time;
};

#endif // STOP1_H

