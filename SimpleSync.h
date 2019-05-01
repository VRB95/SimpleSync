#ifndef SimpleSync_H
#define SimpleSync_H

#include <QMainWindow>
#include <QProcess>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QTextCursor>

namespace Ui {
class SimpleSync;
}

class SimpleSync : public QMainWindow
{
    Q_OBJECT

public:
    explicit SimpleSync(QWidget *parent = nullptr);
    ~SimpleSync();
    QString logCommand;
    QString logFilePath;
    bool isRemoteSync_On = false;
    QString command;
    void printC (QString command);

private slots:
    void on_selectOriginFolder_btn_clicked();

    void on_selectSyncFolder_btn_clicked();

    void on_synchronize_btn_clicked();

    void on_logFile_checkBox_stateChanged(int arg1);

    void on_remoteSync_checkBox_stateChanged(int arg1);

    void on_pushButton_2_clicked();

private:
    Ui::SimpleSync *ui;
};


#endif // SimpleSync_H
