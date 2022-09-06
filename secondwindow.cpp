#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QLabel>
#include <QString>
#include <QPainter>
#include <QKeyEvent>
#include <thread>
#include <QFileDialog>
#include<QMessageBox>
#include "notes.h"

QString alp = "wetyuasdfghjk";
QString nums = "0123456789";
bool paint = false,stop_music = false, thr_running = false;
unsigned int  count_clicked = 0;
int const i_note = 13, count_positions = 13;
int stats[count_positions] = { -1 };
int positions[i_note][count_positions] = { 0 };
notes note;

secondwindow::secondwindow(QWidget* parent) :
    QDialog(parent),
    ui(new Ui::secondwindow)
{
    ui->setupUi(this);

}

secondwindow::~secondwindow()
{
    delete ui;
}

void secondwindow:: PrintList(Element*& current) {
    Element* next, * one;
    one = current;
            ui->label_do_1->setText(current->write);
            next = current->address;
            current = next;
            ui->label_re->setText(current->write);
            next = current->address;
            current = next;
            ui->label_mi->setText(current->write);
            next = current->address;
            current = next;
            ui->label_fa->setText(current->write);
            next = current->address;
            current = next;
            ui->label_sol->setText(current->write);
            next = current->address;
            current = next;
            ui->label_lya->setText(current->write);
            next = current->address;
            current = next;
            ui->label_si->setText(current->write);
            next = current->address;
            current = next;
            ui->label_do_2->setText(current->write);
            next = current->address;
            current = next;
            ui->label_dodiez->setText(current->write);
            next = current->address;
            current = next;
            ui->label_rediez->setText(current->write);
            next = current->address;
            current = next;
            ui->label_fadiez->setText(current->write);
            next = current->address;
            current = next;
            ui->label_soldiez->setText(current->write);
            next = current->address;
            current = next;
            ui->label_lyadiez->setText(current->write);
            next = current->address;
            current = next;
           current = one;
}

void secondwindow::slot_0() {

    ui->label_do_1->setText("");
    ui->label_dodiez->setText("");
    ui->label_re->setText("");
    ui->label_rediez->setText("");
    ui->label_mi->setText("");
    ui->label_fa->setText("");
    ui->label_fadiez->setText("");
    ui->label_sol->setText("");
    ui->label_soldiez->setText("");
    ui->label_lya->setText("");
    ui->label_lyadiez->setText("");
    ui->label_si->setText("");
   ui->label_do_2->setText("");
}

void secondwindow::on_radioButton_0_clicked(bool checked)
{
    if (checked) {
        slot_0();
    }
}

void secondwindow::on_radioButton_note_clicked(bool checked)
{
    if (checked) {
        QString notes[i_note] = { "   do","   re","   mi", "   fa", "   sol", "   lya", "   si","   do","   #do", "   #re","   #fa", "   #sol", "   #lya" };
        Element* head_adress = MadeList(i_note,notes);
        PrintList(head_adress);
        DeleteList(head_adress);
    }
}

void secondwindow::on_radioButton_button_clicked(bool checked)
{
    if (checked) {
        QString buttons[13] = { "   A","   S","   D", "   F", "   G", "   H", "   J","   K","   W", "   E","   T", "   Y", "   U" };
        Element* head_adress = MadeList(i_note, buttons);
        PrintList(head_adress);
        DeleteList(head_adress);
    }
}


void secondwindow::on_do_1_pressed() {

    note.play_do1();
}

void secondwindow::on_do_1_released() {

    note.stop_do1();
}


void secondwindow::on_dodiez_pressed() {

    note.play_dodiez();
}

void secondwindow::on_dodiez_released() {

    note.stop_dodiez();
}


void secondwindow::on_re_pressed()
{
    note.play_re();
}

void secondwindow::on_re_released()
{
    note.stop_re();
}


void secondwindow::on_rediez_pressed() {
     note.play_rediez();
}

void secondwindow::on_rediez_released()
{
    note.stop_rediez();
}


void secondwindow::on_mi_pressed()
{
    note.play_mi();
}

void secondwindow::on_mi_released()
{
    note.stop_mi();
}


void secondwindow::on_fa_pressed()
{
    note.play_fa();
}

void secondwindow::on_fa_released()
{
    note.stop_fa();
}


void secondwindow::on_fadiez_pressed()
{
    note.play_fadiez();
}

void secondwindow::on_fadiez_released()
{
    note.stop_fadiez();
}


void secondwindow::on_sol_pressed()
{
    note.play_sol();
}

void secondwindow::on_sol_released()
{
    note.stop_sol();
}


void secondwindow::on_soldiez_pressed()
{
    note.play_soldiez();
}

void secondwindow::on_soldiez_released()
{
    note.stop_soldiez();
}


void secondwindow::on_lya_pressed()
{
    note.play_lya();
}

void secondwindow::on_lya_released()
{
    note.stop_lya();
}


void secondwindow::on_lyadiez_pressed()
{
    note.play_lyadiez();
}

void secondwindow::on_lyadiez_released()
{
    note.stop_lyadiez();
}


void secondwindow::on_si_pressed()
{
    note.play_si();
}

void secondwindow::on_si_released()
{
    note.stop_si();
}


void secondwindow::on_do_2_pressed()
{
    note.play_do2();
}

void secondwindow::on_do_2_released()
{
    note.stop_do2();
}



void secondwindow::keyPressEvent(QKeyEvent* e) {
    if (e->key() == Qt::Key_A) {
        on_do_1_pressed();
    }
    if (e->key() == Qt::Key_W) {
        on_dodiez_pressed();
    }
    if (e->key() == Qt::Key_S) {
        on_re_pressed();
    }
    if (e->key() == Qt::Key_E) {
        on_rediez_pressed();
    }
    if ((e->key() == Qt::Key_D)) {
        on_mi_pressed();;
    }
    if (e->key() == Qt::Key_F) {
        on_fa_pressed();
    }
    if (e->key() == Qt::Key_T) {
        on_fadiez_pressed();
    }
    if (e->key() == Qt::Key_G) {
        on_sol_pressed();
    }
    if (e->key() == Qt::Key_Y) {
        on_soldiez_pressed();
    }
    if (e->key() == Qt::Key_H) {
        on_lya_pressed();
    }
    if (e->key() == Qt::Key_U) {
        on_lyadiez_pressed();
    }
    if (e->key() == Qt::Key_J) {
        on_si_pressed();
    }
    if (e->key() == Qt::Key_K) {
        on_do_2_pressed();
    }
}

void secondwindow::on_buffer_2_clicked() {
   count_clicked++;
   if (count_clicked % 2 == 0) {
       paint = false;
       ui->buffer_2->setText("Draw: off");
    }
   else {
       paint = true;
       ui->buffer_2->setText("Draw: on");
   }
    update();

    for (int i = 0; i < count_positions; i++) {
        stats[i] = -1;
    }
    for (int i = 0; i < 13; i++) {
        if (i == 0 || i == 1 || i == 2) {
            for (int j = 0; j < count_positions; j++) {
                positions[i][j] = ((90 + 34 * j) * 1000) + (222 - i * 10);
            }
        }
        else if (i == 8 || i == 9) {
            for (int j = 0; j < count_positions; j++) {
                positions[i][j] = ((90 + 34 * j) * 1000) + (222 - (i - 8) * 10);
            }
        }
        else if (i == 3 || i == 4) {
            for (int j = 0; j < count_positions; j++) {
                positions[i][j] = ((90 + 34 * j) * 1000) + (218 - i * 8);
            }
        }
        else if (i == 10 || i == 11) {
            for (int j = 0; j < count_positions; j++) {
                positions[i][j] = ((90 + 34 * j) * 1000) + (218 - (i - 7) * 8);
            }
        }
        else if (i == 6 || i == 7) {
            for (int j = 0; j < count_positions; j++) {
                positions[i][j] = ((90 + 34 * j) * 1000) + (216 - i * 8);
            }
        }
        else {
            for (int j = 0; j < count_positions; j++) {
                positions[i][j] = ((90 + 34 * j) * 1000) + (178);
            }
        }
    }
}

void secondwindow::keyReleaseEvent(QKeyEvent* e) {

    if ((e->isAutoRepeat())) {
        e-> ignore();
    }
    else {
        if (e->key() == Qt::Key_A) {
            on_do_1_clicked();
            note.stop_do1();
        }
        if (e->key() == Qt::Key_W) {
            on_dodiez_clicked();
            note.stop_dodiez();
        }
        if (e->key() == Qt::Key_S) {
            on_re_clicked();
            note.stop_re();
        }
        if (e->key() == Qt::Key_E) {
            on_rediez_clicked();
            note.stop_rediez();
        }
        if (e->key() == Qt::Key_D) {
            on_mi_clicked();
            note.stop_mi();
        }
        if (e->key() == Qt::Key_F) {
            on_fa_clicked();
            note.stop_fa();
        }
        if (e->key() == Qt::Key_T) {
            on_fadiez_clicked();
            note.stop_fadiez();
        }
        if (e->key() == Qt::Key_G) {
            on_sol_clicked();
            note.stop_sol();
        }
        if (e->key() == Qt::Key_Y) {
            on_soldiez_clicked();
            note.stop_soldiez();
        }
        if (e->key() == Qt::Key_H) {
            on_lya_clicked();
            note.stop_lya();
        }
        if (e->key() == Qt::Key_U) {
            on_lyadiez_clicked();
            note.stop_lyadiez();
        }
        if (e->key() == Qt::Key_J) {
            on_si_clicked();
            note.stop_si();
        }
        if (e->key() == Qt::Key_K) {
            on_do_2_clicked();
            note.stop_do2();
        }
    }
}



void secondwindow::on_do_1_clicked()
{
    int const note_do = 0;
    if (stats[count_positions-1] != -1) {
        for (int i = 0; i < count_positions; i++) {
            stats[i] = -1;
        }
    }
    for (int i=0; i < count_positions; i++) {
        if(stats[i] == -1){
            stats[i] = note_do;
            break;
        };
    }
    repaint();
}

void secondwindow::on_dodiez_clicked()
{
    int const note_dodiez= 8;
    if (stats[count_positions - 1] != -1) {
        for (int i = 0; i < count_positions; i++) {
            stats[i] = -1;
        }
    }
    for (int i = 0; i < count_positions; i++) {
        if (stats[i] == -1) {
            stats[i] = note_dodiez;
            break;
        };
    }
    repaint();
}

void secondwindow::on_re_clicked()
{
    int const note_re = 1;
    if (stats[count_positions-1] != -1) {
        for (int i = 0; i < count_positions; i++) {
            stats[i] = -1;
        }
    }
    for (int i = 0; i < count_positions; i++) {
        if (stats[i] == -1) {
            stats[i] = note_re;
            break;
        };
    }
    repaint();
}

void secondwindow::on_rediez_clicked()
{
    int const note_rediez = 9;
    if (stats[count_positions - 1] != -1) {
        for (int i = 0; i < count_positions; i++) {
            stats[i] = -1;
        }
    }
    for (int i = 0; i < count_positions; i++) {
        if (stats[i] == -1) {
            stats[i] = note_rediez;
            break;
        };
    }
    repaint();
}

void secondwindow::on_mi_clicked()
{
    int const note_mi = 2;
    if (stats[count_positions-1] != -1) {
        for (int i = 0; i < count_positions; i++) {
            stats[i] = -1;
        }
    }
    for (int i = 0; i < count_positions; i++) {
        if (stats[i] == -1) {
            stats[i] = note_mi;
            break;
        };
    }
    repaint();
}

void secondwindow::on_fa_clicked()
{
    int const note_fa = 3;
    if (stats[count_positions-1] != -1) {
        for (int i = 0; i < count_positions; i++) {
            stats[i] = -1;
        }
    }
    for (int i = 0; i < count_positions; i++) {
        if (stats[i] == -1) {
            stats[i] = note_fa;
            break;
        };
    }
    repaint();
}

void secondwindow::on_fadiez_clicked()
{
    int const note_fadiez = 10;
    if (stats[count_positions - 1] != -1) {
        for (int i = 0; i < count_positions; i++) {
            stats[i] = -1;
        }
    }
    for (int i = 0; i < count_positions; i++) {
        if (stats[i] == -1) {
            stats[i] = note_fadiez;
            break;
        };
    }
    repaint();
}

void secondwindow::on_sol_clicked()
{
    int const note_sol = 4;
    if (stats[count_positions-1] != -1) {
        for (int i = 0; i < count_positions; i++) {
            stats[i] = -1;
        }
    }
    for (int i = 0; i < count_positions; i++) {
        if (stats[i] == -1) {
            stats[i] = note_sol;
            break;
        };
    }
    repaint();
}

void secondwindow::on_soldiez_clicked()
{
    int const note_soldiez = 11;
    if (stats[count_positions - 1] != -1) {
        for (int i = 0; i < count_positions; i++) {
            stats[i] = -1;
        }
    }
    for (int i = 0; i < count_positions; i++) {
        if (stats[i] == -1) {
            stats[i] = note_soldiez;
            break;
        };
    }
    repaint();
}

void secondwindow::on_lya_clicked()
{

    int const note_lya = 5;
    if (stats[count_positions-1] != -1) {
        for (int i = 0; i < count_positions; i++) {
            stats[i] = -1;
        }
    }
    for (int i = 0; i < count_positions; i++) {
        if (stats[i] == -1) {
            stats[i] = note_lya;
            break;
        };
    }
    repaint();
}

void secondwindow::on_lyadiez_clicked()
{
    int const note_lyadiez = 12;
    if (stats[count_positions - 1] != -1) {
        for (int i = 0; i < count_positions; i++) {
            stats[i] = -1;
        }
    }
    for (int i = 0; i < count_positions; i++) {
        if (stats[i] == -1) {
            stats[i] = note_lyadiez;
            break;
        };
    }
    repaint();
}

void secondwindow::on_si_clicked()
{
    int const note_si = 6;
    if (stats[count_positions-1] != -1) {
        for (int i = 0; i < count_positions; i++) {
            stats[i] = -1;
        }
    }
    for (int i = 0; i < count_positions; i++) {
        if (stats[i] == -1) {
            stats[i] = note_si;
            break;
        };
    }
    repaint();
}

void secondwindow::on_do_2_clicked()
{
    int const note_do_2 = 7;
    if (stats[count_positions-1] != -1) {
        for (int i = 0; i < count_positions; i++) {
            stats[i] = -1;
        }
    }
    for (int i = 0; i < count_positions; i++) {
        if (stats[i] == -1) {
            stats[i] = note_do_2;
            break;
        };
    }
    repaint();
}

void secondwindow::paintEvent(QPaintEvent* event)
    {
        QPainter painter(this);
        Q_UNUSED(event);
        painter.drawPixmap(this->rect(), QPixmap("res\\key_fon.png").scaled(this->size()));
        if (paint) {
        for (int i = 0; i < count_positions; i++) {
            if (stats[i] != -1) {
                int x = positions[stats[i]][i] / 1000;
                int y = positions[stats[i]][i] % 1000;
                if (stats[i] == 0||stats[i]==8) {                    painter.setBrush(QBrush(Qt::black, Qt::SolidPattern));
                    painter.drawLine(x - 5, y + 8, x + 19, y + 8);
                }
                if (8<=stats[i]) {
                    painter.setBrush(QBrush(Qt::magenta, Qt::SolidPattern));
                    painter.drawLine(x -13, y+10, x-5, y+10);
                    painter.drawLine(x - 13, y +6, x - 5, y +6);
                    painter.drawLine(x - 11, y + 16, x -11, y +2);
                    painter.drawLine(x - 7, y + 16, x - 7, y + 2);
                }
                painter.setBrush(QBrush(Qt::magenta, Qt::SolidPattern));
                painter.drawEllipse(x, y, 15, 15);

            }
        }
    }
 }


void all_thr(QString out) {
    notes thr_note;
    thr_running = true;
    stop_music = false;
    for (int i = 0; i < out.length(); i++) {
        if (alp.contains(out[i])) {
            QString tmp_note = out[i];
            QString tmp_time = "";
            i++;
            while (i < out.length() && nums.contains(out[i])) {
                tmp_time.append(out[i]);
                i++;
            }
            if (tmp_time.isEmpty())
                tmp_time = "1000";
            int time = tmp_time.toInt();
            if (time > 1000)
                time = 1000;
            i--;
            if (!stop_music) {
                if (QString::localeAwareCompare(tmp_note, QChar('a')) == 0) {
                    thr_note.play_do1();
                    Sleep(time);
                    thr_note.stop_do1();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('s')) == 0) {
                    thr_note.play_re();
                    Sleep(time);
                    thr_note.stop_re();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('d')) == 0) {
                    thr_note.play_mi();
                    Sleep(time);
                    thr_note.stop_mi();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('f')) == 0) {
                    thr_note.play_fa();
                    Sleep(time);
                    thr_note.stop_fa();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('g')) == 0) {
                    thr_note.play_sol();
                    Sleep(time);
                    thr_note.stop_sol();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('h')) == 0) {
                    thr_note.play_lya();
                    Sleep(time);
                    thr_note.stop_lya();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('j')) == 0) {
                    thr_note.play_si();
                    Sleep(time);
                    thr_note.stop_si();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('k')) == 0) {
                    thr_note.play_do2();
                    Sleep(time);
                    thr_note.stop_do2();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('w')) == 0) {
                    thr_note.play_dodiez();
                    Sleep(time);
                    thr_note.stop_dodiez();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('e')) == 0) {
                    thr_note.play_rediez();
                    Sleep(time);
                    thr_note.stop_rediez();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('t')) == 0) {
                    thr_note.play_fadiez();
                    Sleep(time);
                    thr_note.stop_fadiez();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('u')) == 0) {
                    thr_note.play_soldiez();
                    Sleep(time);
                    thr_note.stop_soldiez();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('i')) == 0) {
                    thr_note.play_lyadiez();
                    Sleep(time);
                    thr_note.stop_lyadiez();
                }
            }
            else {
                stop_music = false;
                thr_running = false;
                return;
            }
        }
    }
    thr_running = false;
}

void secondwindow::on_button_go_clicked() {
    QString out;
    out = ui->textEdit->toPlainText();

    for (int i = 0; i < out.length(); i++) {
        if (!(alp.contains(out[i]) || nums.contains(out[i]))) {
            out.replace(i, 1, "");
            i--;
        }
    }
    ui->textEdit->setText(out);
    if (!thr_running) {
        std::thread thr_sound(all_thr, out);
        thr_sound.detach();
    }
}

void secondwindow::on_pushButton_clicked() {
    stop_music = true;
}

void secondwindow::on_button_file_clicked() {
    {
        QString path = QFileDialog::getOpenFileName(this, "", "C:\\", "txt (*.txt)");
        QFile fread = path;
        if (!fread.open(QFile::ReadOnly | QFile::Text))
        {
            QMessageBox::information(this, "Error",  fread.errorString());
            return;
        }
        setWindowTitle(path);
        QTextStream stream(&fread);
        stream.setEncoding(QStringConverter::Utf8);
        QString buffer = stream.readAll();
        ui->textEdit->setText(buffer);
        fread.close();
    }
}

