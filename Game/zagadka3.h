#ifndef ZAGADKA3_H
#define ZAGADKA3_H

#include <QWidget>
#include <QTime>
#include <QTimer>

namespace Ui {
class Zagad3;
}

class Zagad3 : public QWidget
{
    Q_OBJECT

public:
    explicit Zagad3(QWidget *parent = nullptr);
    ~Zagad3();

signals:
   void pravilno3();
    void oshibka5();
     void oshibka6();

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

     void updateTime();

private:
    Ui::Zagad3 *ui;
    QTimer *tmr;
    QTime *time;
};


#endif // ZAGADKA3_H
