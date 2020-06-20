#ifndef OSHIBKA_H
#define OSHIBKA_H

#include <QWidget>
#include <QTime>
#include <QTimer>

namespace Ui {
class Oshib;
}

class Oshib : public QWidget
{
    Q_OBJECT

public:
    explicit Oshib(QWidget *parent = nullptr);
    ~Oshib();

signals:
   void start();
    void menu();


private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

      void updateTime();

private:
    Ui::Oshib *ui;
    QTimer *tmr;
    QTime *time;
};
#endif // OSHIBKA_H
