#ifndef NOTES_H
#define NOTES_H
#include <SFML/Audio.hpp>

class notes
{
public:
    notes();
    void play_do1();
    void stop_do1();
    void play_dodiez();
    void stop_dodiez();
    void play_re();
    void stop_re();
    void play_rediez();
    void stop_rediez();
    void play_mi();
    void stop_mi();
    void play_fa();
    void stop_fa();
    void play_fadiez();
    void stop_fadiez();
    void play_sol();
    void stop_sol();
    void play_soldiez();
    void stop_soldiez();
    void play_lya();
    void stop_lya();
    void play_lyadiez();
    void stop_lyadiez();
    void play_si();
    void stop_si();
    void play_do2();
    void stop_do2();

private:
sf::SoundBuffer buffer_do, buffer_dodiez, buffer_re, buffer_rediez, buffer_mi,  buffer_fa, buffer_fadiez, buffer_sol, buffer_soldiez, buffer_lya,buffer_lyadiez, buffer_si, buffer_do2;
sf::Sound sound_do,sound_dodiez, sound_re, sound_rediez, sound_mi, sound_fa, sound_fadiez, sound_sol, sound_soldiez, sound_lya, sound_lyadiez, sound_si, sound_do2;
};

#endif // NOTES_H
