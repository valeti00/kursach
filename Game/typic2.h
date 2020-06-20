#ifndef TYPIC2_H
#define TYPIC2_H

#include <QWidget>
#include <QTime>
#include <QTimer>

namespace Ui {
class Stop2;
}

class Stop2 : public QWidget
{
    Q_OBJECT

public:
    explicit Stop2(QWidget *parent = nullptr);
    ~Stop2();

signals:
   void nazad();

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

    void updateTime();

private:
    Ui::Stop2 *ui;
    QTimer *tmr;
    QTime *time;
};

#endif // TYPIC2_H
