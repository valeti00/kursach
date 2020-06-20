#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QTimer>
#include <QTime>
#include <QTcpSocket>
#include <QMessageBox>
#include <QDebug>
#include <anotherwindow.h>
#include <window3.h>
#include <stena1.h>
#include <zagadka1.h>
#include <oshibka.h>
#include <good1.h>
#include <lovushka1.h>
#include <typic2.h>
#include <pravo.h>
#include <konec.h>
#include <zagadka2.h>
#include <levo.h>
#include <typic3.h>
#include <vpered.h>
#include <vpered2.h>
#include <tupic4.h>
#include <zagadka3.h>
#include <good2.h>
#include <vpered3.h>
#include <user.h>




QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



public slots:



private slots:
    // Слоты от кнопок главного окна

    void on_pushButton_2_clicked();


private:
    Ui::MainWindow *ui;
    QTimer *tmr;
    QTime *time;
    Start *sWindow;
    Window3 *thirdWindow;
    Razv *tratata;
    Zagad1 *otvet;
    Oshib *vibor;
    Dalee *pyti;
    Lov *smert;
    Stop2 *naz;
    Pochti *dvij;
    Pobeda *yra;
    Zagad2 *reshenie;
    Levof *yasno;
    Stop3 *bud;
    Vpered1 *hoju;
    Vpered2 *deistvie;
    Stop4 *obr;
    Zagad3 *otvet2;
    Dalee2 *prod;
    Vpered3 *sobiti;
    User *perexod;



};

#endif // MAINWINDOW_H
