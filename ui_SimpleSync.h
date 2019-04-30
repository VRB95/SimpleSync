/********************************************************************************
** Form generated from reading UI file 'SimpleSync.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLESYNC_H
#define UI_SIMPLESYNC_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimpleSync
{
public:
    QAction *actionLog_Menu;
    QAction *actionExit;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_5;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_12;
    QLineEdit *sync_lineEdit;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *selectSyncFolder_btn;
    QGridLayout *gridLayout_6;
    QPushButton *synchronize_btn;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QCheckBox *logFile_checkBox;
    QLineEdit *logPath;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_11;
    QLineEdit *origin_lineEdit;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *selectOriginFolder_btn;
    QWidget *tab_6;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QLineEdit *username_line;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *ip_line;
    QLabel *label_5;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *remoteSync_checkBox;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_10;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *pushButton_2;
    QFrame *line;
    QTextEdit *console;

    void setupUi(QMainWindow *SimpleSync)
    {
        if (SimpleSync->objectName().isEmpty())
            SimpleSync->setObjectName(QString::fromUtf8("SimpleSync"));
        SimpleSync->resize(464, 530);
        actionLog_Menu = new QAction(SimpleSync);
        actionLog_Menu->setObjectName(QString::fromUtf8("actionLog_Menu"));
        actionExit = new QAction(SimpleSync);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(SimpleSync);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_5 = new QGridLayout(tab_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(tab_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_12 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_12);

        sync_lineEdit = new QLineEdit(tab_5);
        sync_lineEdit->setObjectName(QString::fromUtf8("sync_lineEdit"));

        horizontalLayout_2->addWidget(sync_lineEdit);

        horizontalSpacer_10 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        selectSyncFolder_btn = new QPushButton(tab_5);
        selectSyncFolder_btn->setObjectName(QString::fromUtf8("selectSyncFolder_btn"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        selectSyncFolder_btn->setIcon(icon);
        selectSyncFolder_btn->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(selectSyncFolder_btn);


        gridLayout_5->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        synchronize_btn = new QPushButton(tab_5);
        synchronize_btn->setObjectName(QString::fromUtf8("synchronize_btn"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/sync.png"), QSize(), QIcon::Normal, QIcon::Off);
        synchronize_btn->setIcon(icon1);
        synchronize_btn->setIconSize(QSize(24, 24));

        gridLayout_6->addWidget(synchronize_btn, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_6->addItem(verticalSpacer, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 2, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        logFile_checkBox = new QCheckBox(tab_5);
        logFile_checkBox->setObjectName(QString::fromUtf8("logFile_checkBox"));
        logFile_checkBox->setChecked(true);

        horizontalLayout_3->addWidget(logFile_checkBox);

        logPath = new QLineEdit(tab_5);
        logPath->setObjectName(QString::fromUtf8("logPath"));

        horizontalLayout_3->addWidget(logPath);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout_6->addLayout(horizontalLayout_3, 0, 0, 1, 3);


        gridLayout_5->addLayout(gridLayout_6, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tab_5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer_11 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_11);

        origin_lineEdit = new QLineEdit(tab_5);
        origin_lineEdit->setObjectName(QString::fromUtf8("origin_lineEdit"));

        horizontalLayout->addWidget(origin_lineEdit);

        horizontalSpacer_9 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        selectOriginFolder_btn = new QPushButton(tab_5);
        selectOriginFolder_btn->setObjectName(QString::fromUtf8("selectOriginFolder_btn"));
        selectOriginFolder_btn->setIcon(icon);
        selectOriginFolder_btn->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(selectOriginFolder_btn);


        gridLayout_5->addLayout(horizontalLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        gridLayout_8 = new QGridLayout(tab_6);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        username_line = new QLineEdit(tab_6);
        username_line->setObjectName(QString::fromUtf8("username_line"));

        gridLayout_7->addWidget(username_line, 3, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_7->addItem(verticalSpacer_3, 0, 0, 1, 3);

        ip_line = new QLineEdit(tab_6);
        ip_line->setObjectName(QString::fromUtf8("ip_line"));

        gridLayout_7->addWidget(ip_line, 5, 2, 1, 1);

        label_5 = new QLabel(tab_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFrameShape(QFrame::NoFrame);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_5, 3, 0, 1, 1);

        label_6 = new QLabel(tab_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFrameShape(QFrame::NoFrame);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_6, 5, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        remoteSync_checkBox = new QCheckBox(tab_6);
        remoteSync_checkBox->setObjectName(QString::fromUtf8("remoteSync_checkBox"));

        horizontalLayout_6->addWidget(remoteSync_checkBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        gridLayout_7->addLayout(horizontalLayout_6, 1, 0, 1, 3);

        horizontalSpacer_8 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_8, 5, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_7, 3, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_7->addItem(verticalSpacer_4, 4, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_7->addItem(verticalSpacer_2, 6, 0, 1, 3);


        gridLayout_8->addLayout(gridLayout_7, 0, 0, 1, 1);

        tabWidget->addTab(tab_6, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 3, 1);


        gridLayout->addLayout(gridLayout_2, 0, 1, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_10->addWidget(label_7, 0, 0, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_17, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_10->addWidget(pushButton_2, 0, 2, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line, 1, 0, 1, 3);


        gridLayout->addLayout(gridLayout_10, 1, 1, 1, 1);

        console = new QTextEdit(centralWidget);
        console->setObjectName(QString::fromUtf8("console"));

        gridLayout->addWidget(console, 3, 1, 1, 1);

        SimpleSync->setCentralWidget(centralWidget);

        retranslateUi(SimpleSync);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SimpleSync);
    } // setupUi

    void retranslateUi(QMainWindow *SimpleSync)
    {
        SimpleSync->setWindowTitle(QApplication::translate("SimpleSync", "SimpleSync", nullptr));
        actionLog_Menu->setText(QApplication::translate("SimpleSync", "Log Menu", nullptr));
        actionExit->setText(QApplication::translate("SimpleSync", "Exit", nullptr));
        label_2->setText(QApplication::translate("SimpleSync", "Sync Folder: ", nullptr));
        selectSyncFolder_btn->setText(QString());
        synchronize_btn->setText(QApplication::translate("SimpleSync", "Synchronize", nullptr));
        logFile_checkBox->setText(QApplication::translate("SimpleSync", "Log File", nullptr));
        label->setText(QApplication::translate("SimpleSync", "Origin Folder:", nullptr));
        selectOriginFolder_btn->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("SimpleSync", "Sync", nullptr));
        label_5->setText(QApplication::translate("SimpleSync", "Username:", nullptr));
        label_6->setText(QApplication::translate("SimpleSync", "Host IP:", nullptr));
        remoteSync_checkBox->setText(QApplication::translate("SimpleSync", "Remote Sync", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("SimpleSync", "Remote Setting", nullptr));
        label_7->setText(QApplication::translate("SimpleSync", "Console: ", nullptr));
        pushButton_2->setText(QApplication::translate("SimpleSync", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SimpleSync: public Ui_SimpleSync {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLESYNC_H
