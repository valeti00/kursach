#ifndef TYPIC4_H
#define TYPIC4_H

#include <QWidget>
#include <QTime>
#include <QTimer>

namespace Ui {
class Stop4;
}

class Stop4 : public QWidget
{
    Q_OBJECT

public:
    explicit Stop4(QWidget *parent = nullptr);
    ~Stop4();

signals:
   void nazad2();

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

    void updateTime();

private:
    Ui::Stop4 *ui;
    QTimer *tmr;
    QTime *time;
};

#endif // TYPIC3_H
