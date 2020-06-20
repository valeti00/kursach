#ifndef PRAVO_H
#define PRAVO_H

#include <QWidget>
#include <QTime>
#include <QTimer>

namespace Ui {
class Pochti;
}

class Pochti : public QWidget
{
    Q_OBJECT

public:
    explicit Pochti(QWidget *parent = nullptr);
    ~Pochti();

signals:
   void levo2();
    void pered2();
     void pravo2();

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

     void updateTime();

private:
    Ui::Pochti *ui;
    QTimer *tmr;
    QTime *time;
};
#endif // PRAVO_H
