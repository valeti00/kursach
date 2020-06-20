#ifndef KONEC_H
#define KONEC_H

#include <QWidget>
#include <QTime>
#include <QTimer>

namespace Ui {
class Pobeda;
}

class Pobeda : public QWidget
{
    Q_OBJECT

public:
    explicit Pobeda(QWidget *parent = nullptr);
    ~Pobeda();

signals:
   void menu3();

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

    void updateTime();



    void on_pushButton_2_clicked();

private:
    Ui::Pobeda *ui;
    QTimer *tmr;
    QTime *time;
};

#endif // KONEC_H
