#include <QtGui>
#include <QApplication>
#include <QLabel>
#include "MainWindow.h"
#include <iostream>
#include "Perso.hpp"

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    MainWindow mainWindow;
    mainWindow.show();
    return app.exec();
}

int main2(int argc, char** argv) {

    Perso a;
    a.setName("Haaraaaaaald");
    std::cout << a.getName() << "\n";
    a.setStrength(12);
    std::cout << a.getStrengtMod() << "\n";
}