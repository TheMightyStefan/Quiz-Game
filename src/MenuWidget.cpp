#include <QWidget>

#include <QVBoxLayout>

#include "MenuWidget.h"

MenuWidget::MenuWidget(QWidget *parent) : QWidget(parent) {
    this->setStyleSheet(
            "background-color: rgb(25, 25, 25);"
            "border: none;"
            );

    this->startButton = new PushButton(this);
    this->startButton->setText("START");

    this->exitButton = new PushButton(this);
    this->exitButton->setText("EXIT");

    QVBoxLayout *buttonLayout = new QVBoxLayout(this);

    buttonLayout->addWidget(startButton);
    buttonLayout->addWidget(exitButton);

    this->setLayout(buttonLayout);
}

const PushButton *MenuWidget::getStartButton() {
    return this->startButton;
}

const PushButton *MenuWidget::getExitButton() {
    return this->exitButton;
}
