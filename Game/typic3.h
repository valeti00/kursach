#ifndef TYPIC3_H
#define TYPIC3_H

#include <QWidget>
#include <QTime>
#include <QTimer>

namespace Ui {
class Stop3;
}

class Stop3 : public QWidget
{
    Q_OBJECT

public:
    explicit Stop3(QWidget *parent = nullptr);
    ~Stop3();

signals:
   void obratno1();

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

    void updateTime();

private:
    Ui::Stop3 *ui;
    QTimer *tmr;
    QTime *time;
};

#endif // TYPIC3_H
