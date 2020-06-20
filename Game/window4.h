#ifndef WINDOW4_H
#define WINDOW4_H

#include <QWidget>
#include <anotherwindow.h>

namespace Ui {
class Window4;
}

class Window : public QWidget
{
    Q_OBJECT

public:
    explicit Window3(QWidget *parent = 0);
    ~Window3();

signals:
    void Window3Signal_ShowFirstWindow();  // Сигнал для первого окна на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

private:
    Ui::Window3 *ui;
    AnotherWindow *sWindow;
};

#endif // WINDOW3_H
