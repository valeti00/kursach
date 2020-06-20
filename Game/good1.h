#ifndef GOOD1_H
#define GOOD1_H

#include <QWidget>
#include <QTime>
#include <QTimer>

namespace Ui {
class Dalee;
}

class Dalee : public QWidget
{
    Q_OBJECT

public:
    explicit Dalee(QWidget *parent = nullptr);
    ~Dalee();

signals:
   void levo();
    void pered();
     void pravo();

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void updateTime();

private:
    Ui::Dalee *ui;
    QTimer *tmr;
    QTime *time;
};

#endif // GOOD1_H
