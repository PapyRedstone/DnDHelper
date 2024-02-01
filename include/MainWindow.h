#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItem>
#include "TreeItem.hpp"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

    void buildTree(std::shared_ptr<TreeItem> tree);

private:
    void buildTree(std::shared_ptr<TreeItem> tree, QStandardItem* parent);

    Ui::MainWindow* ui;
};

#endif // MAINWINDOW_H 