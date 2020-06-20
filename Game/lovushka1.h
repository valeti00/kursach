#ifndef LOVUSHKA1_H
#define LOVUSHKA1_H

#include <QWidget>
#include <QLabel>
#include <QTime>
#include <QTimer>
#include <QMovie>

namespace Ui {
class Lov;
}

class Lov : public QWidget
{
    Q_OBJECT

public:
    explicit Lov(QWidget *parent = nullptr);
    ~Lov();
     QMovie *movie;


signals:
   void start2();
    void menu2();


private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

      void updateTime();


private:
    Ui::Lov *ui;
    QTimer *tmr;
    QTime *time;

};
#endif // LOVUSHKA1_H
