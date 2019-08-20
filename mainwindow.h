#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWebEngineWidgets>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void OpenDir();
    void ClearOverlays();
    void DistanceToolSwitch();
    void GetImage(const QString &str);
private:
    Ui::MainWindow *ui;
    QWebEngineView *mpMap;
    int mBol ;
    QString mDirPath;
    QStringList mImageList;
};

#endif // MAINWINDOW_H
