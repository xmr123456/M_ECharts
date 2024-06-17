#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    on_btn_line_clicked();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_line_clicked()
{
    ui->widget_view->load(QUrl("qrc:/html/line.html"));
}

void MainWindow::on_btn_linex_clicked()
{
    ui->widget_view->load(QUrl("qrc:/html/linex.html"));
}

void MainWindow::on_btn_liney_clicked()
{
    ui->widget_view->load(QUrl("qrc:/html/liney.html"));
}

void MainWindow::on_btn_bar_clicked()
{
    ui->widget_view->load(QUrl("qrc:/html/bar.html"));
}

void MainWindow::on_btn_barx_clicked()
{
    ui->widget_view->load(QUrl("qrc:/html/barx.html"));
}

void MainWindow::on_btn_bary_clicked()
{
    ui->widget_view->load(QUrl("qrc:/html/bary.html"));
}

void MainWindow::on_btn_scatter_clicked()
{
    ui->widget_view->load(QUrl("qrc:/html/scatter.html"));
}

void MainWindow::on_btn_pie_clicked()
{
    ui->widget_view->load(QUrl("qrc:/html/pie.html"));
}

void MainWindow::on_btn_k_clicked()
{
    ui->widget_view->load(QUrl("qrc:/html/k.html"));
}

void MainWindow::on_btn_radar_clicked()
{
    ui->widget_view->load(QUrl("qrc:/html/radar.html"));
}

void MainWindow::on_btn_chord_clicked()
{
    ui->widget_view->load(QUrl("qrc:/html/chord.html"));
}

void MainWindow::on_btn_gauge_clicked()
{
    ui->widget_view->load(QUrl("qrc:/html/gauge.html"));
}

void MainWindow::on_btn_funnel_clicked()
{
    ui->widget_view->load(QUrl("qrc:/html/funnel.html"));
}
