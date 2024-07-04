#ifndef PARAMS_CONFIG1_H
#define PARAMS_CONFIG1_H

#include <QWidget>

namespace Ui {
class params_config1;
}

class params_config1 : public QWidget
{
    Q_OBJECT

public:
    explicit params_config1(QWidget *parent = nullptr);
    ~params_config1();

private slots:
    void on_push_menu_clicked();

    void on_former_step_clicked();

    void on_cancle_button_clicked();

    void on_range_min_textEdited(const QString &arg1);

    void on_range_max_textEdited(const QString &arg1);

    void on_comboBox_1_currentTextChanged(const QString &arg1);

    void on_cancel_button_clicked();

    void on_next_step_clicked();


private:
    Ui::params_config1 *ui;
};

#endif // PARAMS_CONFIG1_H
