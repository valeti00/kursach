#ifndef ZAGADKA2_H
#define ZAGADKA2_H

#include <QWidget>
#include <QTime>
#include <QTimer>

namespace Ui {
class Zagad2;
}

class Zagad2 : public QWidget
{
    Q_OBJECT

public:
    explicit Zagad2(QWidget *parent = nullptr);
    ~Zagad2();

signals:
   void pravilno2();
    void oshibka3();
     void oshibka4();

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void updateTime();


private:
    Ui::Zagad2 *ui;
    QTimer *tmr;
    QTime *time;
};

#endif // ZAGADKA2_H
