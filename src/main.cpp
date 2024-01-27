#include <QtGui>
#include <QApplication>
#include <QLabel>
#include "MainWindow.h"
#include <iostream>

int main(int argc, char** argv) {
    std::cout << "AAAAAAAAAAAAAAAAAAAAAAAA\n";
    QApplication app(argc, argv);
    MainWindow mainWindow;
    mainWindow.show();
    return app.exec();
}