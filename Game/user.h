#ifndef USER_H
#define USER_H

#include <QWidget>
#include <QTcpSocket>
#include <QString>





namespace Ui {
class User;
}

class User : public QWidget
{
    Q_OBJECT

public:
    explicit User(QWidget *parent = 0);
    ~User();
    QTcpSocket* sock;
    QByteArray Otvet;
    QString data;


signals:
     // Сигнал для третьего окна на открытие
    void Podtverdit();


public slots:



private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();


private:
    Ui::User *ui;

};

#endif // USER_H
