#ifndef UIINPUT_H
#define UIINPUT_H

#include <QWidget>

namespace Ui {
class uiInput;
}

class uiInput : public QWidget
{
    Q_OBJECT

public:
    explicit uiInput(QWidget *parent = nullptr);
    ~uiInput();


private:
    Ui::uiInput *ui;
};

#endif // UIINPUT_H
