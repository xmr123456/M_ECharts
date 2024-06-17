#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_line_clicked();

    void on_btn_linex_clicked();

    void on_btn_liney_clicked();

    void on_btn_bar_clicked();

    void on_btn_barx_clicked();

    void on_btn_bary_clicked();

    void on_btn_scatter_clicked();

    void on_btn_pie_clicked();

    void on_btn_k_clicked();

    void on_btn_radar_clicked();

    void on_btn_chord_clicked();

    void on_btn_gauge_clicked();

    void on_btn_funnel_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
