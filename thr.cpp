#include <thread>
#include <QString>
#include "notes.h"
#include <Windows.h>


void all_thr(QString out) {
    bool thr_running = false, stop_music = false;
    QString alp = "wetyuasdfghjk";
    QString nums = "0123456789";
    notes thr_note;
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
