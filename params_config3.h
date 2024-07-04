#ifndef PARAMS_CONFIG3_H
#define PARAMS_CONFIG3_H

#include <QWidget>

namespace Ui {
class params_config3;
}

class params_config3 : public QWidget
{
    Q_OBJECT

public:
    explicit params_config3(QWidget *parent = nullptr);
    ~params_config3();

private slots:
    void on_cancel_button_clicked();

    void on_former_step_clicked();

    void on_comboBox_1_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_comboBox_3_currentIndexChanged(int index);

    void on_range_max_textEdited(const QString &arg1);

    void on_range_max_2_textEdited(const QString &arg1);

    void on_range_max_3_textEdited(const QString &arg1);

    void on_range_min_textEdited(const QString &arg1);

    void on_range_min_2_textEdited(const QString &arg1);

    void on_range_min_3_textEdited(const QString &arg1);

    void on_next_step_clicked();

private:
    Ui::params_config3 *ui;
};

#endif // PARAMS_CONFIG3_H
