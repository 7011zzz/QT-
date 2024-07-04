#include "params_config4.h"
#include "ui_params_config4.h"
#include "title.h"
#include "ui_title.h"
#include <fstream>
#include <stdio.h>
#include "input_judge.h"
#include "input_deal.h"
#include "option_success.h"

int judge4[13]={0};
params_config4::params_config4(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::params_config4)
{
    ui->setupUi(this);
    ui->next_step->setEnabled(false);
    connect(ui->range_min1,SIGNAL(returnPressed()),this,SLOT(on_next_step_clicked()));
    connect(ui->range_max,SIGNAL(returnPressed()),this,SLOT(on_next_step_clicked()));
}

params_config4::~params_config4()
{
    delete ui;
}


void params_config4::on_cancle_button_clicked()
{
    close();
}


void params_config4::on_former_step_clicked()
{
    title *t=new title;
    t->show();
    close();
}

int enable_judge4(){
    for(int i=1;i<13;++i){
        if(judge4[i]==0){
            return 0;
        }
    }
    return 1;
}


void params_config4::on_comboBox_1_currentIndexChanged(int index)
{
    judge4[1]++;
    if(enable_judge4()){
        ui->next_step->setEnabled(true);
    }
}


void params_config4::on_comboBox_2_currentIndexChanged(int index)
{
    judge4[2]++;
    if(enable_judge4()){
        ui->next_step->setEnabled(true);
    }
}


void params_config4::on_comboBox_3_currentIndexChanged(int index)
{
    judge4[3]++;
    if(enable_judge4()){
        ui->next_step->setEnabled(true);
    }
}


void params_config4::on_comboBox_4_currentIndexChanged(int index)
{
    judge4[4]++;
    if(enable_judge4()){
        ui->next_step->setEnabled(true);
    }
}


void params_config4::on_range_max_textEdited(const QString &arg1)
{
    judge4[5]++;
    if(enable_judge4()){
        ui->next_step->setEnabled(true);
    }
}


void params_config4::on_range_max2_textEdited(const QString &arg1)
{
    judge4[6]++;
    if(enable_judge4()){
        ui->next_step->setEnabled(true);
    }
}


void params_config4::on_range_max3_textEdited(const QString &arg1)
{
    judge4[7]++;
    if(enable_judge4()){
        ui->next_step->setEnabled(true);
    }
}


void params_config4::on_range_max4_textEdited(const QString &arg1)
{
    judge4[8]++;
    if(enable_judge4()){
        ui->next_step->setEnabled(true);
    }
}


void params_config4::on_range_min1_textEdited(const QString &arg1)
{
    judge4[9]++;
    if(enable_judge4()){
        ui->next_step->setEnabled(true);
    }
}


void params_config4::on_range_min2_textEdited(const QString &arg1)
{
    judge4[10]++;
    if(enable_judge4()){
        ui->next_step->setEnabled(true);
    }
}


void params_config4::on_range_min3_textEdited(const QString &arg1)
{
    judge4[11]++;
    if(enable_judge4()){
        ui->next_step->setEnabled(true);
    }
}


void params_config4::on_range_min4_textEdited(const QString &arg1)
{
    judge4[12]++;
    if(enable_judge4()){
        ui->next_step->setEnabled(true);
    }
}


void params_config4::on_next_step_clicked()
{
    QString min_num[5];
    QString max_num[5];
    int index[5];
    min_num[1] = ui->range_min1->text();
    max_num[1]= ui->range_max->text();
    min_num[2] = ui->range_min2->text();
    max_num[2]= ui->range_max2->text();
    min_num[3] = ui->range_min3->text();
    max_num[3]= ui->range_max3->text();
    min_num[4] = ui->range_min4->text();
    max_num[4]= ui->range_max4->text();
    index[1] = ui->comboBox_1->currentIndex();
    index[2] = ui->comboBox_2->currentIndex();
    index[3] = ui->comboBox_3->currentIndex();
    index[4] = ui->comboBox_4->currentIndex();
    myclean();
    int ret=0;
    for(int kk=1;kk<5;kk++){
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
        if(ret==4){
            show_success();
        }
        fflush(stdout);
    }
}

