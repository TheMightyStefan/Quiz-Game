#include "main_window.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    this->setStyleSheet(
            "background-color: rgb(25, 25, 25);"
            "border: none;"
            );

    this->setFixedSize(650, 700);

    this->show();
}
