#ifndef VPERED2_H
#define VPERED2_H

#include <QWidget>
#include <QTime>
#include <QTimer>

namespace Ui {
class Vpered2;
}

class Vpered2 : public QWidget
{
    Q_OBJECT

public:
    explicit Vpered2(QWidget *parent = nullptr);
    ~Vpered2();

signals:
   void tup();
   void zag();

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void updateTime();

private:
    Ui::Vpered2 *ui;
    QTimer *tmr;
    QTime *time;
};

#endif // VPERED_H
