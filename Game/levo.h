#ifndef LEVO_H
#define LEVO_H

#include <QWidget>
#include <QTime>
#include <QTimer>

namespace Ui {
class Levof;
}

class Levof : public QWidget
{
    Q_OBJECT

public:
    explicit Levof(QWidget *parent = 0);
    ~Levof();

signals:
    void vperedl();  // Сигнал для первого окна на открытие
    void tupics();

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void updateTime();


private:
    Ui::Levof *ui;
    QTimer *tmr;
    QTime *time;

};

#endif // LEVO1_H
