#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopWidget>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix(":/pict/pict/pict2.png");
    ui->label_pict->setPixmap(pix);



    MainWindow::ui->pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 200, 94);"
                                                                "font-size: 36px;height: 48px;width: 120px;"
                                                                "border: 3px solid #828282"));

   QDesktopWidget desktop;
    QRect rect = desktop.availableGeometry(this);
    QPoint center = rect.center();
    int x = center.x() - (width()/2);
    int y = center.y() - (height()/2);
    center.setX(x);
    center.setY(y);
    move(center);


    int width = QApplication::desktop()->width();
    int height = QApplication::desktop()->height();
    if (width > height)
    {
        resize(768, 800);
    }
    else
        {
            resize(width, height/2);
        }


    time = new QTime(0,0,0);
    tmr = new QTimer(this); // Создаем объект класса QTimer и передаем адрес переменной
    tmr->setInterval(1000); // Задаем интервал таймера
    connect(tmr, SIGNAL(timeout()), this, SLOT(updateTime())); // Подключаем сигнал таймера к нашему слоту
    tmr->start(); // Запускаем таймер


    // Инициализируем окно СТАРТА
    sWindow = new Start();
    // Инициализируем окно СЕРВЕРА
    perexod = new User();
    connect(perexod, &User::Podtverdit, sWindow, &Start::show);
    // Инициализируем ПОВОРОТ НАПРАВО
        thirdWindow = new Window3();
        // Переход от СТАРТА к ПОВОРОТ НАПРАВО
        connect(sWindow, &Start::Window2Signal_ShowThirdWindow, thirdWindow, &Window3::show);
            tratata = new Razv();
            //Первый поворот налево (тупик1)
            connect(thirdWindow, &Window3::povorot, tratata, &Razv::show);
            //Ход назад
            connect(tratata, &Razv::oknotri, thirdWindow, &Window3::show);
                //Ход вперед, попадание на загадку
                otvet = new Zagad1();
                connect(thirdWindow, &Window3::pered, otvet, &Zagad1::show);
                //Ошибка 1
                vibor = new Oshib();
                connect(otvet, &Zagad1::oshibka, vibor, &Oshib::show);
                //Переход на старт
                connect(vibor, &Oshib::start, sWindow, &Start::show);
                //Переход в главное меню
                connect(vibor, &Oshib::menu, this, &MainWindow::show);
                    //Ошибка 2
                    connect(otvet, &Zagad1::oshibka2, vibor, &Oshib::show);
                    //Переход на старт
                    connect(vibor, &Oshib::start, sWindow, &Start::show);
                    //Переход в главное меню
                    connect(vibor, &Oshib::menu, this, &MainWindow::show);
                        //Правильный ответ, продвижение дальше
                        pyti = new Dalee();
                        connect(otvet, &Zagad1::pravilno, pyti, &Dalee::show);
                            //Поворот налево (ловушка)
                            smert = new Lov();
                            connect(pyti, &Dalee::levo, smert, &Lov::show);
                            //Переход на старт
                            connect(smert, &Lov::start2, sWindow, &Start::show);
                            //Переход в главное меню
                            connect(smert, &Lov::menu2, this, &MainWindow::show);
                                //Ход вперед (тупик2)
                                naz = new Stop2();
                                connect(pyti, &Dalee::pered, naz, &Stop2::show);
                                //Ход назад
                                connect(naz, &Stop2::nazad, pyti, &Dalee::show);
                                    //Направо2
                                    dvij = new Pochti();
                                    connect(pyti, &Dalee::pravo, dvij, &Pochti::show);
                                        //Поворот направо(ловушка2)
                                        yra = new Pobeda();
                                        connect(dvij, &Pochti::pravo2, smert, &Lov::show);
                                            //Поворот налево(загадка2)
                                            reshenie = new Zagad2();
                                            connect(dvij, &Pochti::levo2, reshenie, &Zagad2::show);
                                                //Ошибка 1
                                                vibor = new Oshib();
                                                connect(reshenie, &Zagad2::oshibka3, vibor, &Oshib::show);
                                                //Переход на старт
                                                connect(vibor, &Oshib::start, sWindow, &Start::show);
                                                //Переход в главное меню
                                                connect(vibor, &Oshib::menu, this, &MainWindow::show);
                                                    //Ошибка 2
                                                    connect(reshenie, &Zagad2::oshibka4, vibor, &Oshib::show);
                                                    //Переход на старт
                                                    connect(vibor, &Oshib::start, sWindow, &Start::show);
                                                    //Переход в главное меню
                                                    connect(vibor, &Oshib::menu, this, &MainWindow::show);
                                                        //Правильный ответ
                                                        connect(reshenie, &Zagad2::pravilno2, yra, &Pobeda::show);
                                                        connect(yra, &Pobeda::menu3, this, &MainWindow::show);
                                                            //Вперед = Финишь
                                                            connect(dvij, &Pochti::pered2, yra, &Pobeda::show);
                                                            connect(yra, &Pobeda::menu3, this, &MainWindow::show);


            yasno = new Levof();
            //Поворот налево при Старте
            connect(sWindow, &Start::Singallevo, yasno, &Levof::show);
                bud = new Stop3();
                //Тупик 3
                connect(yasno, &Levof::tupics, bud, &Stop3::show);
                //Обратно
                connect(bud, &Stop3::obratno1, yasno, &Levof::show);
                    hoju = new Vpered1();
                    //Ход вперед
                    connect(yasno, &Levof::vperedl, hoju, &Vpered1::show);
                        //Ловушка3
                        connect(hoju, &Vpered1::lovush, smert, &Lov::show);
                        //Ход вперед2
                        deistvie = new Vpered2();
                        connect(hoju, &Vpered1::hod, deistvie, &Vpered2::show);
                            //Тупик4
                            obr = new Stop4();
                            connect(deistvie, &Vpered2::tup, obr, &Stop4::show);
                            //Назад 2
                            connect(obr, &Stop4::nazad2, deistvie, &Vpered2::show);
                            //Загадка 3
                            otvet2 = new Zagad3();
                            connect(deistvie, &Vpered2::zag, otvet2, &Zagad3::show);
                                //Ошибка 1
                                connect(otvet2, &Zagad3::oshibka5, vibor, &Oshib::show);
                                //Переход на старт
                                connect(vibor, &Oshib::start, sWindow, &Start::show);
                                //Переход в главное меню
                                connect(vibor, &Oshib::menu, this, &MainWindow::show);
                                    //Ошибка 2
                                    connect(otvet2, &Zagad3::oshibka6, vibor, &Oshib::show);
                                    //Переход на старт
                                    connect(vibor, &Oshib::start, sWindow, &Start::show);
                                    //Переход в главное меню
                                    connect(vibor, &Oshib::menu, this, &MainWindow::show);
                                        //Правильный ответ
                                        prod = new Dalee2();
                                        connect(otvet2, &Zagad3::pravilno3, prod, &Dalee2::show);
                                            //Шаг налево
                                            connect(prod, &Dalee2::levo2,  smert, &Lov::show);
                                            //Шаг вперед
                                            sobiti = new Vpered3();
                                            connect(prod, &Dalee2::pered2, sobiti, &Vpered3::show);
                                                //Шаг вперед Загадка
                                                connect(sobiti, &Vpered3::prodol, reshenie, &Zagad2::show);
                                                //Поворот налево = конец
                                                connect(sobiti, &Vpered3::popal, yra, &Pobeda::show);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{

    perexod->show();
    this->close();

}



