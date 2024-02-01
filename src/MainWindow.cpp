#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QStringListModel>
#include <QString>

MainWindow::MainWindow(QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {}

void MainWindow::buildTree(std::shared_ptr<TreeItem> tree) {
    QStandardItemModel* model = new QStandardItemModel;
    QStandardItem* parentItem = model->invisibleRootItem();
    buildTree(tree, parentItem);
    ui->persoListTreeView->setModel(model);
}

void MainWindow::buildTree(std::shared_ptr<TreeItem> tree, QStandardItem* parent) {
    for (std::shared_ptr<TreeItem> child : tree->getChilds()) {
        QStandardItem* item = new QStandardItem(QString(child->getName().c_str()));
        parent->appendRow(item);
        buildTree(child, item);
    }
}