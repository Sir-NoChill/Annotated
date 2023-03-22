//
// Created by ayrton on 10/03/23.
//

// You may need to build the project (run Qt uic code generator) to get "ui_uimain.h" resolved

#include "uimain.h"
#include "ui_uimain.h"


uimain::uimain(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::uimain) {
    ui->setupUi(this);
}

uimain::~uimain() {
    delete ui;
}
