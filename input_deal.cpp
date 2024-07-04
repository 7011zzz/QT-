#include "input_deal.h"
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include "option_success.h"
using namespace std;

std::string TXT_PATH = "D:\\QTproject\\qttest\\save.txt";

void show_success(){
    option_success* op = new option_success;
    op->show();
}

void myclean(){
    ofstream f;
    f.open(TXT_PATH,ios::out);
    f.close();
}

void mywrite_int(int minn,int maxx){
    ofstream f;
    f.open(TXT_PATH,ios::app);
    // if(f.is_open()){
    //     cout<<"hhhhhhh"<<endl;
    //     fflush(stdout);
    // }
    f<<"int"<<endl;
    f<<minn<<endl;
    f<<maxx<<endl;

    f.close();
    //show_success();
}

void mywrite_double(double minn,double maxx){
    ofstream f;
    f.open(TXT_PATH,ios::app);
    f<<"double"<<endl;
    f<<minn<<endl;
    f<<maxx<<endl;

    f.close();
    //show_success();
}

