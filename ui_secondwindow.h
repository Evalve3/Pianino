/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secondwindow
{
public:
    QPushButton *si;
    QPushButton *lya;
    QPushButton *sol;
    QPushButton *fa;
    QPushButton *mi;
    QPushButton *re;
    QPushButton *do_1;
    QPushButton *lyadiez;
    QPushButton *dodiez;
    QPushButton *rediez;
    QPushButton *soldiez;
    QPushButton *fadiez;
    QPushButton *do_2;
    QFrame *line;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_0;
    QRadioButton *radioButton_button;
    QRadioButton *radioButton_note;
    QLabel *label_do_1;
    QLabel *label_re;
    QLabel *label_mi;
    QLabel *label_fa;
    QLabel *label_sol;
    QLabel *label_lya;
    QLabel *label_si;
    QLabel *label_do_2;
    QTextEdit *textEdit;
    QPushButton *button_go;
    QLabel *label_dodiez;
    QLabel *label_rediez;
    QLabel *label_fadiez;
    QLabel *label_soldiez;
    QLabel *label_lyadiez;
    QPushButton *buffer_2;
    QPushButton *button_file;
    QPushButton *pushButton;

    void setupUi(QDialog *secondwindow)
    {
        if (secondwindow->objectName().isEmpty())
            secondwindow->setObjectName(QString::fromUtf8("secondwindow"));
        secondwindow->resize(805, 709);
        secondwindow->setStyleSheet(QString::fromUtf8(""));
        si = new QPushButton(secondwindow);
        si->setObjectName(QString::fromUtf8("si"));
        si->setGeometry(QRect(370, 360, 61, 331));
        si->setMouseTracking(false);
        si->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lya = new QPushButton(secondwindow);
        lya->setObjectName(QString::fromUtf8("lya"));
        lya->setGeometry(QRect(310, 360, 61, 331));
        lya->setMouseTracking(false);
        lya->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        sol = new QPushButton(secondwindow);
        sol->setObjectName(QString::fromUtf8("sol"));
        sol->setGeometry(QRect(250, 360, 61, 331));
        sol->setMouseTracking(false);
        sol->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        fa = new QPushButton(secondwindow);
        fa->setObjectName(QString::fromUtf8("fa"));
        fa->setGeometry(QRect(190, 360, 61, 331));
        fa->setMouseTracking(false);
        fa->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(0, 0, 0);"));
        mi = new QPushButton(secondwindow);
        mi->setObjectName(QString::fromUtf8("mi"));
        mi->setGeometry(QRect(130, 360, 61, 331));
        mi->setMouseTracking(false);
        mi->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(0, 0, 0);"));
        re = new QPushButton(secondwindow);
        re->setObjectName(QString::fromUtf8("re"));
        re->setGeometry(QRect(70, 360, 61, 331));
        re->setMouseTracking(false);
        re->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        do_1 = new QPushButton(secondwindow);
        do_1->setObjectName(QString::fromUtf8("do_1"));
        do_1->setGeometry(QRect(10, 360, 61, 331));
        do_1->setMouseTracking(false);
        do_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lyadiez = new QPushButton(secondwindow);
        lyadiez->setObjectName(QString::fromUtf8("lyadiez"));
        lyadiez->setGeometry(QRect(340, 360, 41, 231));
        lyadiez->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)\n"
""));
        dodiez = new QPushButton(secondwindow);
        dodiez->setObjectName(QString::fromUtf8("dodiez"));
        dodiez->setGeometry(QRect(50, 360, 41, 231));
        dodiez->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
        rediez = new QPushButton(secondwindow);
        rediez->setObjectName(QString::fromUtf8("rediez"));
        rediez->setGeometry(QRect(100, 360, 41, 231));
        rediez->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
        soldiez = new QPushButton(secondwindow);
        soldiez->setObjectName(QString::fromUtf8("soldiez"));
        soldiez->setGeometry(QRect(290, 360, 41, 231));
        soldiez->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
        fadiez = new QPushButton(secondwindow);
        fadiez->setObjectName(QString::fromUtf8("fadiez"));
        fadiez->setGeometry(QRect(240, 360, 41, 231));
        fadiez->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)\n"
""));
        do_2 = new QPushButton(secondwindow);
        do_2->setObjectName(QString::fromUtf8("do_2"));
        do_2->setGeometry(QRect(430, 360, 61, 331));
        do_2->setMouseTracking(false);
        do_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        line = new QFrame(secondwindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 340, 481, 41));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(secondwindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(520, 470, 271, 221));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_0 = new QRadioButton(layoutWidget);
        radioButton_0->setObjectName(QString::fromUtf8("radioButton_0"));
        radioButton_0->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        radioButton_0->setChecked(true);

        verticalLayout->addWidget(radioButton_0);

        radioButton_button = new QRadioButton(layoutWidget);
        radioButton_button->setObjectName(QString::fromUtf8("radioButton_button"));
        radioButton_button->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));
        radioButton_button->setAutoRepeat(false);

        verticalLayout->addWidget(radioButton_button);

        radioButton_note = new QRadioButton(layoutWidget);
        radioButton_note->setObjectName(QString::fromUtf8("radioButton_note"));
        radioButton_note->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));

        verticalLayout->addWidget(radioButton_note);

        label_do_1 = new QLabel(secondwindow);
        label_do_1->setObjectName(QString::fromUtf8("label_do_1"));
        label_do_1->setGeometry(QRect(20, 630, 51, 51));
        label_re = new QLabel(secondwindow);
        label_re->setObjectName(QString::fromUtf8("label_re"));
        label_re->setGeometry(QRect(70, 630, 51, 51));
        label_mi = new QLabel(secondwindow);
        label_mi->setObjectName(QString::fromUtf8("label_mi"));
        label_mi->setGeometry(QRect(130, 630, 51, 51));
        label_fa = new QLabel(secondwindow);
        label_fa->setObjectName(QString::fromUtf8("label_fa"));
        label_fa->setGeometry(QRect(190, 630, 51, 51));
        label_sol = new QLabel(secondwindow);
        label_sol->setObjectName(QString::fromUtf8("label_sol"));
        label_sol->setGeometry(QRect(250, 630, 51, 51));
        label_lya = new QLabel(secondwindow);
        label_lya->setObjectName(QString::fromUtf8("label_lya"));
        label_lya->setGeometry(QRect(310, 630, 51, 51));
        label_si = new QLabel(secondwindow);
        label_si->setObjectName(QString::fromUtf8("label_si"));
        label_si->setGeometry(QRect(370, 630, 51, 51));
        label_do_2 = new QLabel(secondwindow);
        label_do_2->setObjectName(QString::fromUtf8("label_do_2"));
        label_do_2->setGeometry(QRect(430, 630, 51, 51));
        textEdit = new QTextEdit(secondwindow);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(80, 270, 411, 81));
        button_go = new QPushButton(secondwindow);
        button_go->setObjectName(QString::fromUtf8("button_go"));
        button_go->setGeometry(QRect(520, 270, 71, 81));
        button_go->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        label_dodiez = new QLabel(secondwindow);
        label_dodiez->setObjectName(QString::fromUtf8("label_dodiez"));
        label_dodiez->setGeometry(QRect(50, 550, 41, 41));
        label_dodiez->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_rediez = new QLabel(secondwindow);
        label_rediez->setObjectName(QString::fromUtf8("label_rediez"));
        label_rediez->setGeometry(QRect(100, 550, 41, 41));
        label_rediez->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_fadiez = new QLabel(secondwindow);
        label_fadiez->setObjectName(QString::fromUtf8("label_fadiez"));
        label_fadiez->setGeometry(QRect(240, 550, 41, 41));
        label_fadiez->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_soldiez = new QLabel(secondwindow);
        label_soldiez->setObjectName(QString::fromUtf8("label_soldiez"));
        label_soldiez->setGeometry(QRect(290, 550, 41, 41));
        label_soldiez->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_lyadiez = new QLabel(secondwindow);
        label_lyadiez->setObjectName(QString::fromUtf8("label_lyadiez"));
        label_lyadiez->setGeometry(QRect(340, 550, 41, 41));
        label_lyadiez->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        buffer_2 = new QPushButton(secondwindow);
        buffer_2->setObjectName(QString::fromUtf8("buffer_2"));
        buffer_2->setGeometry(QRect(520, 360, 271, 91));
        buffer_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        button_file = new QPushButton(secondwindow);
        button_file->setObjectName(QString::fromUtf8("button_file"));
        button_file->setGeometry(QRect(10, 270, 71, 81));
        button_file->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(secondwindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(630, 270, 71, 81));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));
        layoutWidget->raise();
        line->raise();
        sol->raise();
        fa->raise();
        mi->raise();
        re->raise();
        do_1->raise();
        do_2->raise();
        label_do_1->raise();
        label_re->raise();
        label_mi->raise();
        label_fa->raise();
        fadiez->raise();
        dodiez->raise();
        rediez->raise();
        lya->raise();
        soldiez->raise();
        si->raise();
        label_si->raise();
        label_lya->raise();
        label_do_2->raise();
        label_sol->raise();
        lyadiez->raise();
        textEdit->raise();
        button_go->raise();
        label_dodiez->raise();
        label_rediez->raise();
        label_fadiez->raise();
        label_soldiez->raise();
        label_lyadiez->raise();
        buffer_2->raise();
        button_file->raise();
        pushButton->raise();

        retranslateUi(secondwindow);

        QMetaObject::connectSlotsByName(secondwindow);
    } // setupUi

    void retranslateUi(QDialog *secondwindow)
    {
        secondwindow->setWindowTitle(QCoreApplication::translate("secondwindow", "Dialog", nullptr));
        si->setText(QString());
        lya->setText(QString());
        sol->setText(QString());
        fa->setText(QString());
        mi->setText(QString());
        re->setText(QString());
        do_1->setText(QString());
        lyadiez->setText(QString());
        dodiez->setText(QString());
        rediez->setText(QString());
        soldiez->setText(QString());
        fadiez->setText(QString());
        do_2->setText(QString());
        radioButton_0->setText(QCoreApplication::translate("secondwindow", "Empty", nullptr));
        radioButton_button->setText(QCoreApplication::translate("secondwindow", "Keys", nullptr));
        radioButton_note->setText(QCoreApplication::translate("secondwindow", "Notes", nullptr));
        label_do_1->setText(QString());
        label_re->setText(QString());
        label_mi->setText(QString());
        label_fa->setText(QString());
        label_sol->setText(QString());
        label_lya->setText(QString());
        label_si->setText(QString());
        label_do_2->setText(QString());
        textEdit->setHtml(QCoreApplication::translate("secondwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\235\320\260\320\277\320\270\321\210\320\270\321\202\320\265 \320\272\320\273\320\260\320\262\320\270\321\210\321\203,\320\272\320\276\321\202\320\276\321\200\321\203\321\216 \320\275\320\260\320\264\320\276 \321\201\321\213\320\263\321\200\320\260\321\202\321\214.\320\240\321\217\320\264\320\276\320\274 \321\200\320\260\320\267\320\274\320\265\321\200(\320\235\320\265 \320\261\320\276\320\273\321\214\321\210\320\265 1000 \320\274\320\270\320\273\320\273\320\270\321\201\320\265\320\272\321\203"
                        "\320\275\320\264)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\225\321\201\320\273\320\270 \321\201\320\273\320\265\320\262\320\260 \320\276\321\202 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\321\217 \320\272\320\273\320\260\320\262\320\270\321\210\320\270 \320\275\320\265 \320\261\321\203\320\264\320\265\321\202 \321\207\320\270\321\201\320\273\320\260 -\321\201\321\213\320\263\321\200\320\260\320\265\321\202 1000.\320\237\321\200\320\270\320\274\320\265\321\200: d200</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        button_go->setText(QCoreApplication::translate("secondwindow", "Go", nullptr));
        label_dodiez->setText(QString());
        label_rediez->setText(QString());
        label_fadiez->setText(QString());
        label_soldiez->setText(QString());
        label_lyadiez->setText(QString());
        buffer_2->setText(QCoreApplication::translate("secondwindow", "Draw:off", nullptr));
        button_file->setText(QCoreApplication::translate("secondwindow", "File", nullptr));
        pushButton->setText(QCoreApplication::translate("secondwindow", " Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondwindow: public Ui_secondwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
