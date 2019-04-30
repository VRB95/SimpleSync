#include "SimpleSync.h"
#include "ui_SimpleSync.h"

SimpleSync::SimpleSync(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SimpleSync)
{
    ui->setupUi(this);
    ui->logPath->setPlaceholderText("/Users/bogdanvesa/Projects/logs/SimpleSync-backup-log");
    ui->console->moveCursor(QTextCursor::End);

}

SimpleSync::~SimpleSync()
{
    delete ui;
}

void SimpleSync::printC(QString command)
{
    ui->console->insertPlainText(command + "\n");
}

void SimpleSync::on_selectOriginFolder_btn_clicked()
{

    QString defaultPath = QDir::homePath();
    QString filePath = QFileDialog::getExistingDirectory(this, "Get Any File", defaultPath);
    filePath = filePath + "/";
    filePath.replace(" ", "\\ ");
    ui->origin_lineEdit->setText(filePath);
    printC("Origin Folder: " + filePath);
}

void SimpleSync::on_selectSyncFolder_btn_clicked()
{
    QString defaultPath = QDir::homePath();
    QString filePath = QFileDialog::getExistingDirectory(this, "Get Any File", defaultPath);
    filePath.replace(" ", "\\ ");
    ui->sync_lineEdit->setText(filePath);
    printC("Sync Folder: " + filePath);
}

void SimpleSync::on_synchronize_btn_clicked()
{
    QString dir1;
    dir1 = ui->origin_lineEdit->text();
    dir1 = "\"" + dir1 + "\"";

    QString dir2;
    dir2 = ui->sync_lineEdit->text();
    dir2 = "\"" + dir2 + "\"";

    QString username;
    username = ui->username_line->text();
    QString hostIP;
    hostIP = ui->ip_line->text();

    if (isRemoteSync_On == false){
    command = "rsync -arz  -P -i --stats -h " + dir1 + " " + dir2 + logFilePath;
    }
    else if (isRemoteSync_On == true) {
    command = "rsync -a " + username + "@" + hostIP + ":" + dir1 + " " + dir2 + logFilePath;
    }
    printC("Command: " + command);

    QProcess sheel;
    sheel.start("sh", QStringList() << "-c" << command);
    sheel.waitForFinished(-1);
    QByteArray output = sheel.readAll();
    printC(output);
    sheel.close();
    printC("Done!");

}


void SimpleSync::on_logFile_checkBox_stateChanged(int arg1)
{
    if (arg1 == 2){
        logFilePath = " --log-file=/Users/bogdanvesa/Projects/logs/SimpleSync-backup-log-$(date +\"%Y-%m-%d\").log | grep -E '^[^.]|^$'";
        ui->logPath->setText("/Users/bogdanvesa/Projects/logs/SimpleSync-backup-log");
        printC("Log file path: " + logFilePath);
    }
    else {
        logFilePath = "";
        printC("No log data");
    }
}

void SimpleSync::on_remoteSync_checkBox_stateChanged(int arg1)
{
    if (arg1 == 2){
        isRemoteSync_On = true;
    }
    else {
        isRemoteSync_On = false;
    }
}

void SimpleSync::on_pushButton_2_clicked()
{
    ui->console->clear();
}
