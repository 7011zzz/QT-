#include "params_config3.h"
#include "ui_params_config3.h"
#include "title.h"
#include "ui_title.h"
#include <fstream>
#include <stdio.h>
#include "input_judge.h"
#include "input_deal.h"
#include "option_success.h"

int judge3[110]={0};
params_config3::params_config3(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::params_config3)
{
    ui->setupUi(this);
    ui->next_step->setEnabled(false);
    connect(ui->range_min,SIGNAL(returnPressed()),this,SLOT(on_next_step_clicked()));
    connect(ui->range_max,SIGNAL(returnPressed()),this,SLOT(on_next_step_clicked()));
}

params_config3::~params_config3()
{
    delete ui;
}

void params_config3::on_cancel_button_clicked()
{
    close();
}


void params_config3::on_former_step_clicked()
{
    title *t=new title;
    t->show();
    close();
}

int enable_judge3(){
    for(int i=1;i<10;++i){
        if(judge3[i]==0){
            return 0;
        }
    }
    return 1;
}

void params_config3::on_comboBox_1_currentIndexChanged(int index)
{
    judge3[1]++;
    if(enable_judge3()){
        ui->next_step->setEnabled(true);
    }
}


void params_config3::on_comboBox_2_currentIndexChanged(int index)
{
    judge3[2]++;
    if(enable_judge3()){
        ui->next_step->setEnabled(true);
    }
}


void params_config3::on_comboBox_3_currentIndexChanged(int index)
{
    judge3[3]++;
    if(enable_judge3()){
        ui->next_step->setEnabled(true);
    }
}


void params_config3::on_range_max_textEdited(const QString &arg1)
{
    judge3[4]++;
    if(enable_judge3()){
        ui->next_step->setEnabled(true);
    }
}


void params_config3::on_range_max_2_textEdited(const QString &arg1)
{
    judge3[5]++;
    if(enable_judge3()){
        ui->next_step->setEnabled(true);
    }
}


void params_config3::on_range_max_3_textEdited(const QString &arg1)
{
    judge3[6]++;
    if(enable_judge3()){
        ui->next_step->setEnabled(true);
    }
}


void params_config3::on_range_min_textEdited(const QString &arg1)
{
    judge3[7]++;
    if(enable_judge3()){
        ui->next_step->setEnabled(true);
    }
}


void params_config3::on_range_min_2_textEdited(const QString &arg1)
{
    judge3[8]++;
    if(enable_judge3()){
        ui->next_step->setEnabled(true);
    }
}


void params_config3::on_range_min_3_textEdited(const QString &arg1)
{
    judge3[9]++;
    if(enable_judge3()){
        ui->next_step->setEnabled(true);
    }
}


void params_config3::on_next_step_clicked()
{
    QString min_num[4];
    QString max_num[4];
    int index[4];
    min_num[1] = ui->range_min->text();
    max_num[1]= ui->range_max->text();
    min_num[2] = ui->range_min_2->text();
    max_num[2]= ui->range_max_2->text();
    min_num[3] = ui->range_min_3->text();
    max_num[3]= ui->range_max_3->text();
    index[1] = ui->comboBox_1->currentIndex();
    index[2] = ui->comboBox_2->currentIndex();
    index[3] = ui->comboBox_3->currentIndex();
    myclean();
    int ret=0;
    for(int kk=1;kk<4;kk++){
        min_num[kk]=min_num[kk].trimmed();
        max_num[kk]=max_num[kk].trimmed();
        int judge=1;
        if(index[kk]==1){//判断为int
            judge+=int_num_judge(min_num[kk]);
            judge+=int_num_judge(max_num[kk]);
            if(judge<=0){
                printf("错误：请确保输入为数字\n");
                fflush(stdout);
                return;
            }
            judge+=int_num_compare(min_num[kk],max_num[kk]);
            if(judge<=0){//输入不合法
                printf("输入不合法\n");
                return;
            }
            else{//输入合法，进行下一步
                printf("输入合法\n");
                int min1=min_num[kk].toInt();
                int max1=max_num[kk].toInt();
                mywrite_int(min1,max1);
                ret++;
            }

        }
        else if(index[kk]==2){
            judge+=double_num_judge(min_num[kk]);
            judge+=double_num_judge(max_num[kk]);
            if(judge<=0){
                printf("错误：请确保输入为数字\n");
                fflush(stdout);
                return;
            }
            judge+=double_num_compare(min_num[kk],max_num[kk]);
            if(judge<=0){//输入不合法
                printf("输入不合法\n");
                return;
            }
            else{//输入合法，进行下一步
                printf("输入合法\n");
                double min1=min_num[kk].toDouble();
                double max1=max_num[kk].toDouble();
                mywrite_double(min1,max1);
                ret++;
            }
        }
        if(ret==3){
            show_success();
        }
        fflush(stdout);
    }

}

