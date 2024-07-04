#ifndef PARAMS_CONFIG2_H
#define PARAMS_CONFIG2_H

#include <QWidget>

namespace Ui {
class params_config2;
}

class params_config2 : public QWidget
{
    Q_OBJECT

public:
    explicit params_config2(QWidget *parent = nullptr);
    ~params_config2();

private slots:
    void on_former_step_clicked();

    void on_cancel_button_clicked();

    void on_range_min_textEdited(const QString &arg1);

    void on_range_max_textEdited(const QString &arg1);

    void on_comboBox_1_currentIndexChanged(int index);

    void on_range_min_2_textEdited(const QString &arg1);

    void on_range_max_2_textEdited(const QString &arg1);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_next_step_clicked();

private:
    Ui::params_config2 *ui;
};

#endif // PARAMS_CONFIG2_H
