#ifndef ZAGADKA1_H
#define ZAGADKA1_H

#include <QWidget>
#include <QTime>
#include <QTimer>

namespace Ui {
class Zagad1;
}

class Zagad1 : public QWidget
{
    Q_OBJECT

public:
    explicit Zagad1(QWidget *parent = nullptr);
    ~Zagad1();

signals:
   void pravilno();
    void oshibka();
     void oshibka2();

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void updateTime();


private:
    Ui::Zagad1 *ui;
    QTimer *tmr;
    QTime *time;
};


#endif // ZAGADKA1_H
