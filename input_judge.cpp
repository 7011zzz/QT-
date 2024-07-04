#include "input_judge.h"
#include <QProcess>
#include <stdio.h>
#include "pop_up.h"
#include "pop_up2.h"
using namespace std;


void show_warning(){
    pop_up* p = new pop_up;
    p->show();
}

void show_warning2(){
    pop_up2* pp = new pop_up2;
    pp->show();
}

int int_num_compare(QString a,QString b){//判断是否b>a
    int numa=a.toInt(),numb=b.toInt();
    if(numa>=numb){
        pop_up *pop_up_window = new pop_up;
        printf("请确保区间下限小于上限！\n");
        show_warning2();
        fflush(stdout);

        return -1;
    }
    return 0;
}

int double_num_compare(QString a,QString b){
    int numa=a.toDouble(),numb=b.toDouble();
    if(numa>=numb){
        printf("请确保区间下限小于上限！\n");
        fflush(stdout);
        show_warning2();
        return -1;
    }
    return 0;
}

int int_num_judge(QString s){
    int len=s.length();
    if(len==0){show_warning();return -1;}
    int i=0;
    if(s[0] == '-' || s[0] == '+'){
        i++;
        if(len==1){
            show_warning();
            return -1;
        }
    }
    for(i;i<len;++i){
        if(s[i]>'9'||s[i]<'0'){
            show_warning();
            return -1;
        }
    }
    return 0;
}

int double_num_judge(QString s){
    int len=s.length();
    if(len==0){show_warning();return -1;}
    int i=0;
    if(s[0] == '-' || s[0] == '+'){
        i++;
        if(len==1){
            show_warning();
            return -1;
        }
    }
    int num_dot=0;
    for(int j=i;j<len;++j){
        if((s[j]>'9'||s[j]<'0')&&s[j]!='.'){
            show_warning();
            return -1;
        }
        if(j==i&&s[j]=='.'){
            show_warning();
            return -1;
        }
        if(s[j]=='.'){
            num_dot++;
            if(num_dot>=2){
                show_warning();
                return -1;
            }//两个小数点
        }
    }
    return 0;
}



