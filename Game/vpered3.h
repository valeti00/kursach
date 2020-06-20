#ifndef VPERED3_H
#define VPERED3_H

#include <QWidget>
#include <QTime>
#include <QTimer>

namespace Ui {
class Vpered3;
}

class Vpered3 : public QWidget
{
    Q_OBJECT

public:
    explicit Vpered3(QWidget *parent = nullptr);
    ~Vpered3();

signals:
   void popal();
   void prodol();

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void updateTime();

private:
    Ui::Vpered3 *ui;
    QTimer *tmr;
    QTime *time;
};

#endif // VPERED_H
