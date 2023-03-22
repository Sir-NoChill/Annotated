//
// Created by ayrton on 10/03/23.
//

#ifndef ANNOTATED_UIMAIN_H
#define ANNOTATED_UIMAIN_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class uimain; }
QT_END_NAMESPACE

class uimain : public QMainWindow {
Q_OBJECT

public:
    explicit uimain(QWidget *parent = nullptr);

    ~uimain() override;

private:
    Ui::uimain *ui;
};


#endif //ANNOTATED_UIMAIN_H
