#ifndef PARAMS_CONFIG4_H
#define PARAMS_CONFIG4_H

#include <QWidget>

namespace Ui {
class params_config4;
}

class params_config4 : public QWidget
{
    Q_OBJECT

public:
    explicit params_config4(QWidget *parent = nullptr);
    ~params_config4();

private slots:

    void on_cancle_button_clicked();

    void on_former_step_clicked();

    void on_comboBox_1_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_comboBox_3_currentIndexChanged(int index);

    void on_comboBox_4_currentIndexChanged(int index);

    void on_range_max_textEdited(const QString &arg1);

    void on_range_max2_textEdited(const QString &arg1);

    void on_range_max3_textEdited(const QString &arg1);

    void on_range_max4_textEdited(const QString &arg1);

    void on_range_min1_textEdited(const QString &arg1);

    void on_range_min2_textEdited(const QString &arg1);

    void on_range_min3_textEdited(const QString &arg1);

    void on_range_min4_textEdited(const QString &arg1);

    void on_next_step_clicked();

private:
    Ui::params_config4 *ui;
};

#endif // PARAMS_CONFIG4_H
