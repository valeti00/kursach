#ifndef GOOD2_H
#define GOOD2_H

#include <QWidget>
#include <QTime>
#include <QTimer>

namespace Ui {
class Dalee2;
}

class Dalee2 : public QWidget
{
    Q_OBJECT

public:
    explicit Dalee2(QWidget *parent = nullptr);
    ~Dalee2();

signals:
   void levo2();
    void pered2();


private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void updateTime();

private:
    Ui::Dalee2 *ui;
    QTimer *tmr;
    QTime *time;
};

#endif // GOOD2_H
