#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QFile>
#include<QFileDialog>
#include<QMessageBox>
#include<QTextStream>
#include<QTableWidget>
#include<QTableWidgetItem>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QCoreApplication>
#include <QProcess>
#include <QDebug>
#include <QByteArray>
#include <QIODevice>
#include <QStandardItemModel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Data)
{
    ui->setupUi(this);
}
QString text;//输入数据的文本
QString filePath;//倒入数据的文件地址
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()//导入本地数据
{
    filePath = QFileDialog::getOpenFileName(nullptr, QObject::tr("Open File"),
                                                    QDir::homePath(), QObject::tr("All Files (*)"));
    if (!filePath.isEmpty())
    {
        QFile qfs(filePath);
        if(!qfs.open(QIODevice::ReadOnly|QIODevice::Text))
        {
            QMessageBox::warning(this,"warning","打开文件失败，请生重新检查？",QMessageBox::Ok,QMessageBox::NoButton);
        }
        QByteArray arr;
        while(!qfs.atEnd())
        {
            arr +=qfs.readLine();
        }
        ui->textEdit->setText(arr);
        qfs.close();
    }
}
void MainWindow::on_pushButton_2_clicked()//清除所有目前数据
{
    ui->textEdit->clear();
}

void MainWindow::on_pushButton_4_clicked()//覆盖已输入的数据
{
    if(filePath.isEmpty())//检测是否打开过文件
    {
        QMessageBox::warning(this,"warning","你尚未打开过任何文件夹",QMessageBox::Ok,QMessageBox::NoButton);
    }
    else
    {
        QMessageBox::StandardButton box;
        box = QMessageBox::question(this, "提示", "确定要保存吗?", QMessageBox::Yes|QMessageBox::No);
        if(box==QMessageBox::No)
            return;
        else if(box==QMessageBox::Yes)
        {
            text=ui->textEdit->toPlainText();
            QFile qwe(filePath);
            qwe.open(QIODevice::WriteOnly|QIODevice::Text);
            QTextStream qtextstreamwrite(&qwe);
            qtextstreamwrite<<(QString)text;
            qwe.close();
        }
    }
}


void MainWindow::on_pushButton_3_clicked()//对输入数据的处理过程
{
    text=ui->textEdit->toPlainText();//将输入框文本作为QString保留
    if(text.isEmpty())//检测是否输入了数据
    {
        QMessageBox::warning(this,"warning","未输入数据",QMessageBox::Ok,QMessageBox::NoButton);
    }
    else
    {
        bool ok;
        QString num=ui->textEdit_3->toPlainText();//num是参数个数
        if(num.isEmpty())
        {
           QMessageBox::warning(this,"warning","未输入参数个数",QMessageBox::Ok,QMessageBox::NoButton);
        }
        else
        {
            QStringList datalist=text.split(",");//将数据以,分割储存在datalist中
            int count=datalist.count();//计算总共的元素个数
            int number=num.toInt(&ok);
            QProcess process;
            QString Work_dir=QFileDialog::getExistingDirectory(nullptr, QObject::tr("Open Directory"),
                                                           QDir::homePath());//设置PYTHON工作文件
                process.setWorkingDirectory(Work_dir);
            QString PythonPath= QFileDialog::getOpenFileName(nullptr, QObject::tr("Open File"),
                                   Work_dir, QObject::tr("All Files (*)"));//设置打开的PATHON程序
            for(int i=0;i<count/number;i++)
            {
                ui->textEdit_2->append(QString::number(i));
                ui->textEdit_2->append("---------------------------\n");
                if(number==1)
                {
                    process.start("python",QStringList()<<PythonPath<<datalist[i]);
                }
                if(number==2)
                {
                    process.start("python",QStringList()<<PythonPath<<datalist[i*2]<<datalist[i*2+1]);
                }
                if(number==3)
                {
                    process.start("python",QStringList()<<PythonPath<<datalist[i*3]<<datalist[i*3+1]<<datalist[i*3+2]);
                }
                if(number==4)
                {
                    process.start("python",QStringList()<<PythonPath<<datalist[i*4]<<datalist[i*4+1]<<datalist[i*4+2]<<datalist[i*4+3]);
                }
                process.waitForFinished();
                QByteArray output=process.readAllStandardOutput();
                QByteArray error=process.readAllStandardError();
                qDebug()<<"error:"<<error;
                qDebug()<<"scriptout:"<<output;
                ui->textEdit_2->append(output);
                ui->textEdit_2->append("---------------------------\n");
            }
        }
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    QString Filepath_new=QFileDialog::getSaveFileName(nullptr, QObject::tr("Save File"),
                                                    QDir::homePath(), QObject::tr("TXT(*.txt);;""DOCX(*.docx)"));
    QFile file_new(Filepath_new);
    QString newtext=ui->textEdit->toPlainText();
    file_new.open(QIODevice::WriteOnly);
    file_new.write(newtext.toUtf8());
    file_new.close();
    if(!Filepath_new.isEmpty())
    {
        QMessageBox::information(this,"information","保存成功！",QMessageBox::Ok,QMessageBox::NoButton);
    }
}



void MainWindow::on_pushButton_6_clicked()
{
    QString Filepath_new=QFileDialog::getSaveFileName(nullptr, QObject::tr("Save File"),
                                                        QDir::homePath(), QObject::tr("TXT(*.txt);;""DOCX(*.docx)"));
    QFile file_new(Filepath_new);
    QString newtext=ui->textEdit_2->toPlainText();
    file_new.open(QIODevice::WriteOnly);
    file_new.write(newtext.toUtf8());
    file_new.close();
    if(!Filepath_new.isEmpty())
    {
        QMessageBox::information(this,"information","保存成功！",QMessageBox::Ok,QMessageBox::NoButton);
    }
}


void MainWindow::on_pushButton_10_clicked()
{
    ui->textEdit_2->clear();
}

