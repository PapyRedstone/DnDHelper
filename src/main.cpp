#include <QtGui>
#include <QApplication>
#include <QLabel>
#include "MainWindow.h"
#include <iostream>
#include "Perso.hpp"

int main(int argc, char** argv) {

    Perso p;
    p.setName("Test");
    std::cout << p.getName() << "\n";

    QApplication app(argc, argv);
    MainWindow mainWindow;
    mainWindow.show();
    return app.exec();
}
