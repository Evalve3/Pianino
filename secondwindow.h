#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H
#include <QDialog>
#include <QKeyEvent>
#include <SFML/Audio.hpp>
#include <QString>
#include "ui_secondwindow.h"
#include <Windows.h>
#include <QPainter>
#include <QLabel>

namespace Ui {
class secondwindow;
}

class secondwindow : public QDialog
{
    Q_OBJECT
public:
    explicit secondwindow(QWidget* parent = nullptr) ;
    ~secondwindow();
private:
    Ui::secondwindow* ui;
private slots:
    void on_do_1_pressed();
    void on_do_1_released();
    void on_dodiez_pressed();
    void on_dodiez_released();
    void on_re_pressed();
    void on_re_released();
    void on_rediez_pressed();
    void on_rediez_released();
    void on_mi_pressed();
    void on_mi_released();
    void on_fa_pressed();
    void on_fa_released();
    void on_fadiez_pressed();
    void on_fadiez_released();
    void on_sol_pressed();
    void on_sol_released();
    void on_soldiez_pressed();
    void on_soldiez_released();
    void on_lya_pressed();
    void on_lya_released();
    void on_lyadiez_pressed();
    void on_lyadiez_released();
    void on_si_pressed();
    void on_si_released();
    void on_do_2_pressed();
    void on_do_2_released();
    void on_radioButton_button_clicked(bool checked);
    void on_radioButton_note_clicked(bool checked);
    void on_radioButton_0_clicked(bool checked);
    void on_button_go_clicked();
    void on_do_1_clicked();
    void on_dodiez_clicked();
    void slot_0();
    void on_re_clicked();
    void on_rediez_clicked();
    void on_mi_clicked();
    void on_fa_clicked();
    void on_fadiez_clicked();
    void on_sol_clicked();
    void on_soldiez_clicked();
    void on_lya_clicked();
    void on_lyadiez_clicked();
    void on_si_clicked();
    void on_do_2_clicked();
    void on_buffer_2_clicked();
    void on_button_file_clicked();
    void on_pushButton_clicked();

protected:
    void keyPressEvent(QKeyEvent* e) override;
    void keyReleaseEvent(QKeyEvent* e) override;
    void paintEvent(QPaintEvent* event);

public:
    struct Element {
        QString write;
        Element* address;
    };
    Element* MadeList(unsigned lenght,QString str[13]) {
        Element* cur = 0, * prev = 0, * one = 0;

        for (unsigned int i = 1; i <= lenght; i++) {
            cur = new Element;
            cur->write = str[i-1];
            if (i > 1) {
                prev->address= cur;

            }
            else {
                  one = cur;
            }
            prev = cur;
        }
        cur->address = 0;
        return one;

    }
    void PrintList(Element*& current);
    void DeleteList(Element*& begin) {
        Element* next;
        while (begin) {
            next = begin->address;
             delete begin;
            begin = next;
        }
    }
};
#endif // SECONDWINDOW_H
