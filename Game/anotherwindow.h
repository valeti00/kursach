#ifndef START_H
#define START_H

#include <QWidget>
#include <QTimer>
#include <QTime>



namespace Ui {
class Start;
}

class Start : public QWidget
{
    Q_OBJECT

public:
    explicit Start(QWidget *parent = 0);
    ~Start();



signals:
     // Сигнал для третьего окна на открытие
    void Window2Signal_ShowThirdWindow();
    void Singallevo();

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void updateTime();


private:
    Ui::Start *ui;
    QTimer *tmr;
    QTime *time;
};

#endif // START_H
