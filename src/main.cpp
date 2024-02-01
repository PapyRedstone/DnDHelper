#include <QtGui>
#include <QApplication>
#include <QLabel>
#include "MainWindow.h"
#include <memory>
#include <iostream>
#include "Perso.hpp"

std::shared_ptr<TreeItem> buildTestTree() {
    std::shared_ptr<TreeItem> root = std::make_shared<TreeItem>("root");
    std::shared_ptr<TreeItem> a1 = std::make_shared<TreeItem>("a1");
    a1->addChild(std::make_shared<Perso>("harald"));
    a1->addChild(std::make_shared<Perso>("haaaarald"));

    std::shared_ptr<TreeItem> a2 = std::make_shared<TreeItem>("a2");
    a2->addChild(std::make_shared<Perso>("harald"));
    a2->addChild(std::make_shared<Perso>("haaaarald"));

    root->addChild(a1);
    root->addChild(a2);

    return root;
}

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    MainWindow mainWindow;

    mainWindow.buildTree(buildTestTree());

    mainWindow.show();
    return app.exec();

    return 0;
}

int main2() {

    Perso a("Haaraaaaaald");
    std::cout << a.getName() << "\n";
    a.setStrength(12);
    std::cout << a.getStrengtMod() << "\n";
    return 0;
}