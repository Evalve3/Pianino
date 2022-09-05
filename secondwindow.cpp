#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QLabel>
#include <QString>
#include <QPainter>
#include <QKeyEvent>
#include <SFML/Audio.hpp>
#include <thread>
#include <QFileDialog>
#include<QMessageBox>

QString alp = "wetyuasdfghjk";
QString nums = "0123456789";
bool paint = false,stop_music = false, thr_running = false;
unsigned int  count_clicked = 0;
int const i_note = 13, count_positions = 13;
int stats[count_positions] = { -1 };
int positions[i_note][count_positions] = { 0 };

sf::SoundBuffer buffer_do, buffer_dodiez, buffer_re, buffer_rediez, buffer_mi,  buffer_fa, buffer_fadiez, buffer_sol, buffer_soldiez, buffer_lya,buffer_lyadiez, buffer_si, buffer_do2;
sf::Sound sound_do,sound_dodiez, sound_re, sound_rediez, sound_mi, sound_fa, sound_fadiez, sound_sol, sound_soldiez, sound_lya, sound_lyadiez, sound_si, sound_do2;

secondwindow::secondwindow(QWidget* parent) :
    QDialog(parent),
    ui(new Ui::secondwindow)
{
    ui->setupUi(this);
    buffer_do.loadFromFile("res//do1.wav");
    sound_do.setBuffer(buffer_do);
    buffer_dodiez.loadFromFile("res//do#.wav");
    sound_dodiez.setBuffer(buffer_dodiez);
    buffer_re.loadFromFile("res//re.wav");
    sound_re.setBuffer(buffer_re);
    buffer_rediez.loadFromFile("res//re#.wav");
    sound_rediez.setBuffer(buffer_rediez);
    buffer_mi.loadFromFile("res//mi.wav");
    sound_mi.setBuffer(buffer_mi);
    buffer_fa.loadFromFile("res//fa.wav");
    sound_fa.setBuffer(buffer_fa);
    buffer_fadiez.loadFromFile("res//fa#.wav");
    sound_fadiez.setBuffer(buffer_fadiez);
    buffer_sol.loadFromFile("res//sol.wav");
    sound_sol.setBuffer(buffer_sol);
    buffer_soldiez.loadFromFile("res//sol#.wav");
    sound_soldiez.setBuffer(buffer_soldiez);
    buffer_lya.loadFromFile("res//lya.wav");
    sound_lya.setBuffer(buffer_lya);
    buffer_lyadiez.loadFromFile("res//lya#.wav");
    sound_lyadiez.setBuffer(buffer_lyadiez);
    buffer_si.loadFromFile("res//si.wav");
    sound_si.setBuffer(buffer_si);
    buffer_do2.loadFromFile("res//do2.wav");
    sound_do2.setBuffer(buffer_do2);
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

    if (sound_do.getStatus() != sf::Sound::Playing)
        sound_do.play();
}

void secondwindow::on_do_1_released() {

    if (sound_do.getStatus() == sf::Sound::Playing)
        sound_do.stop();
}


void secondwindow::on_dodiez_pressed() {

    if (sound_dodiez.getStatus() != sf::Sound::Playing)
        sound_dodiez.play();
}

void secondwindow::on_dodiez_released() {

    if (sound_dodiez.getStatus() == sf::Sound::Playing)
        sound_dodiez.stop();
}


void secondwindow::on_re_pressed()
{
        if (sound_re.getStatus() != sf::Sound::Playing)
            sound_re.play();
}

void secondwindow::on_re_released()
{
    if (sound_re.getStatus())
        sound_re.stop();
}


void secondwindow::on_rediez_pressed() {

    if (sound_rediez.getStatus() != sf::Sound::Playing)
        sound_rediez.play();
}

void secondwindow::on_rediez_released()
{
    if (sound_rediez.getStatus())
        sound_rediez.stop();
}


void secondwindow::on_mi_pressed()
{
    if (sound_mi.getStatus() != sf::Sound::Playing)
        sound_mi.play();
}

void secondwindow::on_mi_released()
{
    if (sound_mi.getStatus())
        sound_mi.stop();
}


void secondwindow::on_fa_pressed()
{
    if (sound_fa.getStatus() != sf::Sound::Playing)
        sound_fa.play();
}

void secondwindow::on_fa_released()
{
    if (sound_fa.getStatus())
        sound_fa.stop();
}


void secondwindow::on_fadiez_pressed()
{
    if (sound_fadiez.getStatus() != sf::Sound::Playing)
        sound_fadiez.play();
}

void secondwindow::on_fadiez_released()
{
    if (sound_fadiez.getStatus())
        sound_fadiez.stop();
}


void secondwindow::on_sol_pressed()
{
    if (sound_sol.getStatus() != sf::Sound::Playing)
        sound_sol.play();
}

void secondwindow::on_sol_released()
{
    if (sound_sol.getStatus())
        sound_sol.stop();
}


void secondwindow::on_soldiez_pressed()
{
    if (sound_soldiez.getStatus() != sf::Sound::Playing)
        sound_soldiez.play();
}

void secondwindow::on_soldiez_released()
{
    if (sound_soldiez.getStatus())
        sound_soldiez.stop();
}


void secondwindow::on_lya_pressed()
{
    if (sound_lya.getStatus() != sf::Sound::Playing)
        sound_lya.play();
}

void secondwindow::on_lya_released()
{
    if (sound_lya.getStatus())
        sound_lya.stop();
}


void secondwindow::on_lyadiez_pressed()
{
    if (sound_lyadiez.getStatus() != sf::Sound::Playing)
        sound_lyadiez.play();
}

void secondwindow::on_lyadiez_released()
{
    if (sound_lyadiez.getStatus())
        sound_lyadiez.stop();
}


void secondwindow::on_si_pressed()
{
    if (sound_si.getStatus() != sf::Sound::Playing)
        sound_si.play();
}

void secondwindow::on_si_released()
{
    if (sound_si.getStatus())
        sound_si.stop();
}


void secondwindow::on_do_2_pressed()
{
    if (sound_do2.getStatus() != sf::Sound::Playing)
        sound_do2.play();
}

void secondwindow::on_do_2_released()
{
    if (sound_do2.getStatus())
        sound_do2.stop();
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
            if (sound_do.getStatus())
                sound_do.stop();
        }
        if (e->key() == Qt::Key_W) {
            on_dodiez_clicked();
            if (sound_dodiez.getStatus())
                sound_dodiez.stop();
        }
        if (e->key() == Qt::Key_S) {
            on_re_clicked();
            if (sound_re.getStatus())
                sound_re.stop();
        }
        if (e->key() == Qt::Key_E) {
            on_rediez_clicked();
            if (sound_rediez.getStatus())
                sound_rediez.stop();
        }
        if (e->key() == Qt::Key_D) {
            on_mi_clicked();
            if (sound_mi.getStatus())
                sound_mi.stop();
        }
        if (e->key() == Qt::Key_F) {
            on_fa_clicked();
            if (sound_fa.getStatus())
                sound_fa.stop();
        }
        if (e->key() == Qt::Key_T) {
            on_fadiez_clicked();
            if (sound_fadiez.getStatus())
                sound_fadiez.stop();
        }
        if (e->key() == Qt::Key_G) {
            on_sol_clicked();
            if (sound_sol.getStatus())
                sound_sol.stop();
        }
        if (e->key() == Qt::Key_Y) {
            on_soldiez_clicked();
            if (sound_soldiez.getStatus())
                sound_soldiez.stop();
        }
        if (e->key() == Qt::Key_H) {
            on_lya_clicked();
            if (sound_lya.getStatus())
                sound_lya.stop();
        }
        if (e->key() == Qt::Key_U) {
            on_lyadiez_clicked();
            if (sound_lyadiez.getStatus())
                sound_lyadiez.stop();
        }
        if (e->key() == Qt::Key_J) {
            on_si_clicked();
            if (sound_si.getStatus())
                sound_si.stop();
        }
        if (e->key() == Qt::Key_K) {
            on_do_2_clicked();
            if (sound_do2.getStatus())
                sound_do2.stop();
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
    sf::SoundBuffer buffer_do_thr, buffer_dodiez_thr, buffer_re_thr, buffer_rediez_thr, buffer_mi_thr, buffer_fa_thr, buffer_fadiez_thr, buffer_sol_thr, buffer_soldiez_thr, buffer_lya_thr, buffer_lyadiez_thr, buffer_si_thr, buffer_do2_thr;
    sf::Sound sound_do_thr, sound_dodiez_thr, sound_re_thr, sound_rediez_thr, sound_mi_thr, sound_fa_thr, sound_fadiez_thr, sound_sol_thr, sound_soldiez_thr, sound_lya_thr, sound_lyadiez_thr, sound_si_thr, sound_do2_thr;
    thr_running = true;
    buffer_do_thr.loadFromFile("res\\do1.wav");
    sound_do_thr.setBuffer(buffer_do_thr);
    buffer_dodiez_thr.loadFromFile("res\\do#.wav");
    sound_dodiez_thr.setBuffer(buffer_dodiez_thr);
    buffer_re_thr.loadFromFile("res\\re.wav");
    sound_re_thr.setBuffer(buffer_re_thr);
    buffer_rediez_thr.loadFromFile("res\\re#.wav");
    sound_rediez_thr.setBuffer(buffer_rediez_thr);
    buffer_mi_thr.loadFromFile("res\\mi.wav");
    sound_mi_thr.setBuffer(buffer_mi_thr);
    buffer_fa_thr.loadFromFile("res\\fa.wav");
    sound_fa_thr.setBuffer(buffer_fa_thr);
    buffer_fadiez_thr.loadFromFile("res\\fa#.wav");
    sound_fadiez_thr.setBuffer(buffer_fadiez_thr);
    buffer_sol_thr.loadFromFile("res\\sol.wav");
    sound_sol_thr.setBuffer(buffer_sol_thr);
    buffer_soldiez_thr.loadFromFile("res\\sol#.wav");
    sound_soldiez_thr.setBuffer(buffer_soldiez_thr);
    buffer_lya_thr.loadFromFile("res\\lya.wav");
    sound_lya_thr.setBuffer(buffer_lya_thr);
    buffer_lyadiez_thr.loadFromFile("res\\lya#.wav");
    sound_lyadiez_thr.setBuffer(buffer_lyadiez_thr);
    buffer_si_thr.loadFromFile("res\\si.wav");
    sound_si_thr.setBuffer(buffer_si_thr);
    buffer_do2_thr.loadFromFile("res\\do2.wav");
    sound_do2_thr.setBuffer(buffer_do2_thr);
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
                    sound_do_thr.play();
                    Sleep(time);
                    sound_do_thr.stop();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('s')) == 0) {
                    sound_re_thr.play();
                    Sleep(time);
                    sound_re_thr.stop();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('d')) == 0) {
                    sound_mi_thr.play();
                    Sleep(time);
                    sound_mi_thr.stop();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('f')) == 0) {
                    sound_fa_thr.play();
                    Sleep(time);
                    sound_fa_thr.stop();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('g')) == 0) {
                    sound_sol_thr.play();
                    Sleep(time);
                    sound_sol_thr.stop();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('h')) == 0) {
                    sound_lya_thr.play();
                    Sleep(time);
                    sound_lya_thr.stop();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('j')) == 0) {
                    sound_si_thr.play();
                    Sleep(time);
                    sound_si_thr.stop();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('k')) == 0) {
                    sound_do2_thr.play();
                    Sleep(time);
                    sound_do2_thr.stop();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('w')) == 0) {
                    sound_dodiez_thr.play();
                    Sleep(time);
                    sound_dodiez_thr.stop();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('e')) == 0) {
                    sound_rediez_thr.play();
                    Sleep(time);
                    sound_rediez_thr.stop();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('y')) == 0) {
                    sound_fadiez_thr.play();
                    Sleep(time);
                    sound_fadiez_thr.stop();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('t')) == 0) {
                    sound_fadiez_thr.play();
                    Sleep(time);
                    sound_fadiez_thr.stop();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('u')) == 0) {
                    sound_soldiez_thr.play();
                    Sleep(time);
                    sound_soldiez_thr.stop();
                }
                if (QString::localeAwareCompare(tmp_note, QChar('i')) == 0) {
                    sound_lyadiez_thr.play();
                    Sleep(time);
                    sound_lyadiez_thr.stop();
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

