#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    if ((ui->progressBar->value() + ui->progressBar_2->value() + ui->progressBar_3->value()) > 207) {
        ui->label->setPixmap(QPixmap(":/files/luxfon.com-31448.jpg"));
    } else if ((ui->progressBar->value() + ui->progressBar_2->value() + ui->progressBar_3->value()) > 165) {
        ui->label->setPixmap(QPixmap(":/files/fonstola.ru-77545.jpg"));
    } else if ((ui->progressBar->value() + ui->progressBar_2->value() + ui->progressBar_3->value()) > 120) {
        ui->label->setPixmap(QPixmap(":/files/355154-sepik.jpg"));
    } else if ((ui->progressBar->value() + ui->progressBar_2->value() + ui->progressBar_3->value()) > 75) {
        ui->label->setPixmap(QPixmap(":/files/motto.net.ua-51020.com-31448.jpg"));
    }
    connect(&timer, SIGNAL(timeout()), this, SLOT(abc()));
    timer.start(1000);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    ui->progressBar->setValue(ui->progressBar->value() + 5);
}

void Widget::abc()
{
    ui->progressBar->setValue(ui->progressBar->value() - 1);
    if (ui->progressBar->value() == 0) {
        close();
    }
    ui->progressBar_2->setValue(ui->progressBar_2->value() - 1);
    if (ui->progressBar_2->value() == 0) {
        close();
    }
    ui->progressBar_3->setValue(ui->progressBar_3->value() - 1);
    if (ui->progressBar_3->value() == 0) {
        close();
    }
    if ((ui->progressBar->value() + ui->progressBar_2->value() + ui->progressBar_3->value()) > 207) {
        ui->label->setPixmap(QPixmap(":/files/luxfon.com-31448.jpg"));
    } else if ((ui->progressBar->value() + ui->progressBar_2->value() + ui->progressBar_3->value()) > 165) {
        ui->label->setPixmap(QPixmap(":/files/fonstola.ru-77545.jpg"));
    } else if ((ui->progressBar->value() + ui->progressBar_2->value() + ui->progressBar_3->value()) > 120) {
        ui->label->setPixmap(QPixmap(":/files/355154-sepik.jpg"));
    } else if ((ui->progressBar->value() + ui->progressBar_2->value() + ui->progressBar_3->value()) > 75) {
        ui->label->setPixmap(QPixmap(":/files/motto.net.ua-51020.jpg"));
    }
}

void Widget::on_pushButton_2_clicked()
{
    ui->progressBar_2->setValue(ui->progressBar_2->value() + 5);
}

void Widget::on_pushButton_3_clicked()
{
    ui->progressBar_3->setValue(ui->progressBar_3->value() + 5);
}
