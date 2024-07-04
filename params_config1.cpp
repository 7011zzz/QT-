#include "params_config1.h"
#include "ui_params_config1.h"
#include "title.h"
#include "ui_title.h"
#include <fstream>
#include <stdio.h>
#include "input_judge.h"
#include "input_deal.h"
#include "option_success.h"

//using namespace N;


int judge1[4]={0};
QString temp="\0";
params_config1::params_config1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::params_config1)
{
    ui->setupUi(this);
    ui->next_step->setEnabled(false);
    connect(ui->range_min,SIGNAL(returnPressed()),this,SLOT(on_next_step_clicked()));
    connect(ui->range_max,SIGNAL(returnPressed()),this,SLOT(on_next_step_clicked()));
}

params_config1::~params_config1()
{
    delete ui;
}

void params_config1::on_push_menu_clicked()
{
    // QMenu *mymenu=new QMenu(this);
    // ui->push_menu->setMenu(QMenu *mymenu);
}


void params_config1::on_former_step_clicked()
{
    title *t=new title;
    t->show();
    close();


}


void params_config1::on_cancle_button_clicked()
{
    close();
}


void params_config1::on_range_min_textEdited(const QString &arg1)
{
    judge1[1]++;
    if(judge1[1]&&judge1[2]&&judge1[3]){
        ui->next_step->setEnabled(true);
    }
}


void params_config1::on_range_max_textEdited(const QString &arg1)
{
    judge1[2]++;
    if(judge1[1]&&judge1[2]&&judge1[3]){
        ui->next_step->setEnabled(true);
    }
}


void params_config1::on_comboBox_1_currentTextChanged(const QString &arg1)
{
    judge1[3]++;
    if(judge1[1]&&judge1[2]&&judge1[3]){
        ui->next_step->setEnabled(true);
    }
}


void params_config1::on_cancel_button_clicked()
{
    close();
}


void params_config1::on_next_step_clicked()
{
    //connect(ui->range_min,SIGNAL(returnPressed()),this,SLOT(on_next_step_clicked()));
    QString min_num = ui->range_min->text();
    QString max_num = ui->range_max->text();
    min_num=min_num.trimmed();
    max_num=max_num.trimmed();
    myclean();
    int index = ui->comboBox_1->currentIndex();
    int judge=1;
    int ret = 0;
    if(index==1){//判断为int
        judge+=int_num_judge(min_num);
        judge+=int_num_judge(max_num);
        if(judge<=0){
            printf("错误：请确保输入为数字\n");
            fflush(stdout);
            return;
        }
        judge+=int_num_compare(min_num,max_num);
        if(judge<=0){//输入不合法
            printf("输入不合法\n");
            return;
        }
        else{//输入合法，进行下一步
            printf("输入合法\n");
            int min1=min_num.toInt();
            int max1=max_num.toInt();
            mywrite_int(min1,max1);
            ret++;
        }

    }
    else if(index==2){
        judge+=double_num_judge(min_num);
        judge+=double_num_judge(max_num);
        if(judge<=0){
            printf("错误：请确保输入为数字\n");
            fflush(stdout);
            return;
        }
        judge+=double_num_compare(min_num,max_num);
        if(judge<=0){//输入不合法
            printf("输入不合法\n");
            return;
        }
        else{//输入合法，进行下一步
            printf("输入合法\n");
            double min1=min_num.toDouble();
            double max1=max_num.toDouble();
            mywrite_double(min1,max1);
            ret++;
        }
    }
    if(ret==1){
        show_success();
    }
    fflush(stdout);
}






