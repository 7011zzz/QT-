#ifndef OPTION_SUCCESS_H
#define OPTION_SUCCESS_H

#include <QWidget>

namespace Ui {
class option_success;
}

class option_success : public QWidget
{
    Q_OBJECT

public:
    explicit option_success(QWidget *parent = nullptr);
    ~option_success();

private:
    Ui::option_success *ui;
};

#endif // OPTION_SUCCESS_H
