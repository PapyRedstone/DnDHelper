#include <QtGui>
#include <QApplication>
#include <QLabel>
#include "MainWindow.h"
#include <iostream>
#include "Perso.hpp"

int main2(int argc, char** argv) {

    Perso p;
    p.setName("Test");
    std::cout << p.getName() << "\n";

    QApplication app(argc, argv);
    MainWindow mainWindow;
    mainWindow.show();
    return app.exec();
}

int main(int argc, char** argv) {

    Perso a;
    a.setName("Haaraaaaaald");
    //std::cout << a.getName() << "\n";
    a.setStrength(12);
    std::cout << a.getStrengtMod() << "\n";
}