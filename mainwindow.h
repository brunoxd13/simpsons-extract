#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>
#include <QString>
#include <QList>
#include "colorprocess.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

    QMap<QString, int> mapColors;
    QMap<QString, ColorProcess*> mapColorsProcess;
    QMap<QString, ColorProcess*> mapColorsProcessed;
    int height;
    int width;

private:
    void extract(QString arg);
    QList<ColorProcess*> getPaleta();
};

#endif // MAINWINDOW_H
