/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QPushButton *quitButton;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *number;
    QLineEdit *strin;
    QLineEdit *result;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *D;
    QLineEdit *E;
    QLineEdit *F;
    QTextEdit *T;
    QPushButton *clear;
    QLabel *label_7;
    QPushButton *pushButton_2;
    QLabel *label_9;
    QLineEdit *status;
    QTableWidget *tableWidget;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_5;
    QLabel *label_14;
    QLineEdit *pc;
    QLabel *label_4;
    QLabel *label_6;
    QTableWidget *tableWidget_2;
    QPushButton *debug;
    QPushButton *pushButton_3;
    QPushButton *decimal;
    QPushButton *pushButton_4;
    QTableWidget *symbol_table;
    QLabel *label_8;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName(QStringLiteral("Notepad"));
        Notepad->resize(1254, 857);
        actionOpen = new QAction(Notepad);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(Notepad);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        centralWidget = new QWidget(Notepad);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 40, 471, 431));
        quitButton = new QPushButton(centralWidget);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(950, 150, 111, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(950, 70, 111, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(580, 100, 81, 20));
        number = new QLineEdit(centralWidget);
        number->setObjectName(QStringLiteral("number"));
        number->setGeometry(QRect(680, 90, 121, 41));
        strin = new QLineEdit(centralWidget);
        strin->setObjectName(QStringLiteral("strin"));
        strin->setGeometry(QRect(680, 40, 211, 41));
        result = new QLineEdit(centralWidget);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(680, 150, 151, 41));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(580, 40, 81, 41));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(580, 150, 71, 41));
        D = new QLineEdit(centralWidget);
        D->setObjectName(QStringLiteral("D"));
        D->setGeometry(QRect(710, 250, 151, 31));
        E = new QLineEdit(centralWidget);
        E->setObjectName(QStringLiteral("E"));
        E->setGeometry(QRect(710, 290, 151, 31));
        F = new QLineEdit(centralWidget);
        F->setObjectName(QStringLiteral("F"));
        F->setGeometry(QRect(710, 330, 151, 31));
        T = new QTextEdit(centralWidget);
        T->setObjectName(QStringLiteral("T"));
        T->setGeometry(QRect(150, 0, 331, 31));
        clear = new QPushButton(centralWidget);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(950, 110, 111, 31));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1140, -10, 81, 51));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(950, 190, 111, 31));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(430, 620, 151, 51));
        status = new QLineEdit(centralWidget);
        status->setObjectName(QStringLiteral("status"));
        status->setGeometry(QRect(810, 630, 271, 31));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget->rowCount() < 33)
            tableWidget->setRowCount(33);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(12, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(13, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(14, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(15, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(16, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(17, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(18, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(19, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(20, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(21, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(22, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(23, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(24, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(25, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(26, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(27, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(28, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(29, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(30, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(31, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(32, __qtablewidgetitem33);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setFont(font);
        tableWidget->setItem(0, 0, __qtablewidgetitem34);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(1110, 30, 141, 661));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(610, 10, 121, 17));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, -4, 111, 41));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(620, 220, 101, 17));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(550, 260, 121, 17));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(550, 290, 121, 31));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(550, 330, 121, 31));
        pc = new QLineEdit(centralWidget);
        pc->setObjectName(QStringLiteral("pc"));
        pc->setGeometry(QRect(710, 370, 151, 31));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(550, 370, 151, 31));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(200, 490, 81, 20));
        tableWidget_2 = new QTableWidget(centralWidget);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem37);
        if (tableWidget_2->rowCount() < 3)
            tableWidget_2->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(2, __qtablewidgetitem40);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(30, 520, 381, 141));
        debug = new QPushButton(centralWidget);
        debug->setObjectName(QStringLiteral("debug"));
        debug->setGeometry(QRect(440, 550, 111, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(950, 280, 111, 31));
        decimal = new QPushButton(centralWidget);
        decimal->setObjectName(QStringLiteral("decimal"));
        decimal->setGeometry(QRect(950, 230, 111, 31));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(440, 590, 111, 31));
        symbol_table = new QTableWidget(centralWidget);
        if (symbol_table->columnCount() < 2)
            symbol_table->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        symbol_table->setHorizontalHeaderItem(0, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        symbol_table->setHorizontalHeaderItem(1, __qtablewidgetitem42);
        if (symbol_table->rowCount() < 10)
            symbol_table->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        symbol_table->setVerticalHeaderItem(0, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        symbol_table->setVerticalHeaderItem(1, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        symbol_table->setVerticalHeaderItem(2, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        symbol_table->setVerticalHeaderItem(3, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        symbol_table->setVerticalHeaderItem(4, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        symbol_table->setVerticalHeaderItem(5, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        symbol_table->setVerticalHeaderItem(6, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        symbol_table->setVerticalHeaderItem(7, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        symbol_table->setVerticalHeaderItem(8, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        symbol_table->setVerticalHeaderItem(9, __qtablewidgetitem52);
        symbol_table->setObjectName(QStringLiteral("symbol_table"));
        symbol_table->setGeometry(QRect(820, 450, 241, 151));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(890, 410, 141, 31));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(600, 630, 191, 31));
        progressBar->setValue(0);
        Notepad->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Notepad);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1254, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        Notepad->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Notepad);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Notepad->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Notepad);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Notepad->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QApplication::translate("Notepad", "Notepad", 0));
        actionOpen->setText(QApplication::translate("Notepad", "Open", 0));
        actionSave->setText(QApplication::translate("Notepad", "Save", 0));
        textEdit->setHtml(QApplication::translate("Notepad", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        quitButton->setText(QApplication::translate("Notepad", "Quit", 0));
        pushButton->setText(QApplication::translate("Notepad", "Run", 0));
        label->setText(QApplication::translate("Notepad", "NUMBER", 0));
        label_2->setText(QApplication::translate("Notepad", "STRING", 0));
        label_3->setText(QApplication::translate("Notepad", "OUTPUT", 0));
        clear->setText(QApplication::translate("Notepad", "Clear", 0));
        label_7->setText(QApplication::translate("Notepad", "MEMORY", 0));
        pushButton_2->setText(QApplication::translate("Notepad", "To Hex", 0));
        label_9->setText(QApplication::translate("Notepad", "EXECUTION PROGRESS", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Notepad", "Data", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("Notepad", "00", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("Notepad", "01", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("Notepad", "02", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("Notepad", "03", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QApplication::translate("Notepad", "04", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QApplication::translate("Notepad", "05", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem7->setText(QApplication::translate("Notepad", "06", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem8->setText(QApplication::translate("Notepad", "07", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem9->setText(QApplication::translate("Notepad", "08", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem10->setText(QApplication::translate("Notepad", "09", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem11->setText(QApplication::translate("Notepad", "10", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem12->setText(QApplication::translate("Notepad", "11", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(12);
        ___qtablewidgetitem13->setText(QApplication::translate("Notepad", "12", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(13);
        ___qtablewidgetitem14->setText(QApplication::translate("Notepad", "13", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(14);
        ___qtablewidgetitem15->setText(QApplication::translate("Notepad", "14", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(15);
        ___qtablewidgetitem16->setText(QApplication::translate("Notepad", "15", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->verticalHeaderItem(16);
        ___qtablewidgetitem17->setText(QApplication::translate("Notepad", "16", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->verticalHeaderItem(17);
        ___qtablewidgetitem18->setText(QApplication::translate("Notepad", "17", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->verticalHeaderItem(18);
        ___qtablewidgetitem19->setText(QApplication::translate("Notepad", "18", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->verticalHeaderItem(19);
        ___qtablewidgetitem20->setText(QApplication::translate("Notepad", "19", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->verticalHeaderItem(20);
        ___qtablewidgetitem21->setText(QApplication::translate("Notepad", "20", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->verticalHeaderItem(21);
        ___qtablewidgetitem22->setText(QApplication::translate("Notepad", "21", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->verticalHeaderItem(22);
        ___qtablewidgetitem23->setText(QApplication::translate("Notepad", "22", 0));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->verticalHeaderItem(23);
        ___qtablewidgetitem24->setText(QApplication::translate("Notepad", "23", 0));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->verticalHeaderItem(24);
        ___qtablewidgetitem25->setText(QApplication::translate("Notepad", "24", 0));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->verticalHeaderItem(25);
        ___qtablewidgetitem26->setText(QApplication::translate("Notepad", "25", 0));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->verticalHeaderItem(26);
        ___qtablewidgetitem27->setText(QApplication::translate("Notepad", "26", 0));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->verticalHeaderItem(27);
        ___qtablewidgetitem28->setText(QApplication::translate("Notepad", "27", 0));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->verticalHeaderItem(28);
        ___qtablewidgetitem29->setText(QApplication::translate("Notepad", "28", 0));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->verticalHeaderItem(29);
        ___qtablewidgetitem30->setText(QApplication::translate("Notepad", "29", 0));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->verticalHeaderItem(30);
        ___qtablewidgetitem31->setText(QApplication::translate("Notepad", "30", 0));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->verticalHeaderItem(31);
        ___qtablewidgetitem32->setText(QApplication::translate("Notepad", "31", 0));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->verticalHeaderItem(32);
        ___qtablewidgetitem33->setText(QApplication::translate("Notepad", "32", 0));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        label_10->setText(QApplication::translate("Notepad", "INPUT VARIABLES", 0));
        label_11->setText(QApplication::translate("Notepad", "EDIT PROGRAM", 0));
        label_12->setText(QApplication::translate("Notepad", "REGISTERS", 0));
        label_13->setText(QApplication::translate("Notepad", "ACCUMULATOR", 0));
        label_5->setText(QApplication::translate("Notepad", "INDEX REGISTER", 0));
        label_14->setText(QApplication::translate("Notepad", "BASE REGSITER", 0));
        label_4->setText(QApplication::translate("Notepad", "PROGRAM COUNTER", 0));
        label_6->setText(QApplication::translate("Notepad", "DEBUGGER", 0));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem34->setText(QApplication::translate("Notepad", "LABEL", 0));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem35->setText(QApplication::translate("Notepad", "INSTRUCTION", 0));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem36->setText(QApplication::translate("Notepad", "OPERAND", 0));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem37->setText(QApplication::translate("Notepad", "PREVIOUS", 0));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget_2->verticalHeaderItem(1);
        ___qtablewidgetitem38->setText(QApplication::translate("Notepad", "CURRENT", 0));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget_2->verticalHeaderItem(2);
        ___qtablewidgetitem39->setText(QApplication::translate("Notepad", "NEXT", 0));
        debug->setText(QApplication::translate("Notepad", "DEBUG", 0));
        pushButton_3->setText(QApplication::translate("Notepad", "Clear Memory", 0));
        decimal->setText(QApplication::translate("Notepad", "To Decimal", 0));
        pushButton_4->setText(QApplication::translate("Notepad", "CLEAR DEBUG", 0));
        QTableWidgetItem *___qtablewidgetitem40 = symbol_table->horizontalHeaderItem(0);
        ___qtablewidgetitem40->setText(QApplication::translate("Notepad", "SYMBOL", 0));
        QTableWidgetItem *___qtablewidgetitem41 = symbol_table->horizontalHeaderItem(1);
        ___qtablewidgetitem41->setText(QApplication::translate("Notepad", "LINE", 0));
        QTableWidgetItem *___qtablewidgetitem42 = symbol_table->verticalHeaderItem(0);
        ___qtablewidgetitem42->setText(QApplication::translate("Notepad", "1", 0));
        QTableWidgetItem *___qtablewidgetitem43 = symbol_table->verticalHeaderItem(1);
        ___qtablewidgetitem43->setText(QApplication::translate("Notepad", "2", 0));
        QTableWidgetItem *___qtablewidgetitem44 = symbol_table->verticalHeaderItem(2);
        ___qtablewidgetitem44->setText(QApplication::translate("Notepad", "3", 0));
        QTableWidgetItem *___qtablewidgetitem45 = symbol_table->verticalHeaderItem(3);
        ___qtablewidgetitem45->setText(QApplication::translate("Notepad", "4", 0));
        QTableWidgetItem *___qtablewidgetitem46 = symbol_table->verticalHeaderItem(4);
        ___qtablewidgetitem46->setText(QApplication::translate("Notepad", "5", 0));
        QTableWidgetItem *___qtablewidgetitem47 = symbol_table->verticalHeaderItem(5);
        ___qtablewidgetitem47->setText(QApplication::translate("Notepad", "6", 0));
        QTableWidgetItem *___qtablewidgetitem48 = symbol_table->verticalHeaderItem(6);
        ___qtablewidgetitem48->setText(QApplication::translate("Notepad", "7", 0));
        QTableWidgetItem *___qtablewidgetitem49 = symbol_table->verticalHeaderItem(7);
        ___qtablewidgetitem49->setText(QApplication::translate("Notepad", "8", 0));
        QTableWidgetItem *___qtablewidgetitem50 = symbol_table->verticalHeaderItem(8);
        ___qtablewidgetitem50->setText(QApplication::translate("Notepad", "9", 0));
        label_8->setText(QApplication::translate("Notepad", "SYMBOL TABLE", 0));
        menuFile->setTitle(QApplication::translate("Notepad", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
