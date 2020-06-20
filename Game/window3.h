#ifndef WINDOW3_H
#define WINDOW3_H

#include <QWidget>
#include <anotherwindow.h>
#include <QTime>
#include <QTimer>


namespace Ui {
class Window3;
}

class Window3 : public QWidget
{
    Q_OBJECT

public:
    explicit Window3(QWidget *parent = 0);
    ~Window3();

signals:
    void povorot();  // Сигнал для первого окна на открытие
    void pered();

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void updateTime();

private:
    Ui::Window3 *ui;
    Start *sWindow;
    QTimer *tmr;
    QTime *time;
};

#endif // WINDOW3_H
