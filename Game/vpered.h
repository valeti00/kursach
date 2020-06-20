#ifndef VPERED_H
#define VPERED_H

#include <QWidget>
#include <QTime>
#include <QTimer>

namespace Ui {
class Vpered1;
}

class Vpered1 : public QWidget
{
    Q_OBJECT

public:
    explicit Vpered1(QWidget *parent = nullptr);
    ~Vpered1();

signals:
   void hod();
   void lovush();

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void updateTime();

private:
    Ui::Vpered1 *ui;
    QTimer *tmr;
    QTime *time;
};

#endif // VPERED_H
