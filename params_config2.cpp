#include "params_config2.h"
#include "ui_params_config2.h"
#include "title.h"
#include "ui_title.h"
#include <fstream>
#include <stdio.h>
#include "input_judge.h"
#include "input_deal.h"
#include "option_success.h"

int judge2[7]={0};
int enable_judge2();

params_config2::params_config2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::params_config2)
{
    ui->setupUi(this);
    ui->next_step->setEnabled(false);
    connect(ui->range_min,SIGNAL(returnPressed()),this,SLOT(on_next_step_clicked()));
    connect(ui->range_max,SIGNAL(returnPressed()),this,SLOT(on_next_step_clicked()));
}

params_config2::~params_config2()
{
    delete ui;
}

void params_config2::on_former_step_clicked()
{
    title *t=new title;
    t->show();
    close();
}


void params_config2::on_cancel_button_clicked()
{
    close();
}


int enable_judge2(){
    for(int i=1;i<7;++i){
        if(judge2[i]==0){
            return 0;
        }
    }
    return 1;
}


void params_config2::on_range_min_textEdited(const QString &arg1)
{
    judge2[1]++;
    if(enable_judge2()){
        ui->next_step->setEnabled(true);
    }
}


void params_config2::on_range_max_textEdited(const QString &arg1)
{
    judge2[2]++;
    if(enable_judge2()){
        ui->next_step->setEnabled(true);
    }
}


void params_config2::on_comboBox_1_currentIndexChanged(int index)
{
    judge2[3]++;
    if(enable_judge2()){
        ui->next_step->setEnabled(true);
    }
}


void params_config2::on_range_min_2_textEdited(const QString &arg1)
{
    judge2[4]++;
    if(enable_judge2()){
        ui->next_step->setEnabled(true);
    }
}


void params_config2::on_range_max_2_textEdited(const QString &arg1)
{
    judge2[5]++;
    if(enable_judge2()){
        ui->next_step->setEnabled(true);
    }
}


void params_config2::on_comboBox_2_currentIndexChanged(int index)
{
    judge2[6]++;
    if(enable_judge2()){
        ui->next_step->setEnabled(true);
    }
}


void params_config2::on_next_step_clicked()
{

    QString min_num[3];
    QString max_num[3];
    int index[3];
    min_num[1] = ui->range_min->text();
    max_num[1]= ui->range_max->text();
    min_num[2] = ui->range_min_2->text();
    max_num[2]= ui->range_max_2->text();
    index[1] = ui->comboBox_1->currentIndex();
    index[2] = ui->comboBox_2->currentIndex();
    myclean();
    int ret=0;
    for(int kk=1;kk<3;kk++){
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
        if(ret==2){show_success();}
        fflush(stdout);
    }




}

