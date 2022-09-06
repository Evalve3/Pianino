#include "notes.h"
#include <SFML/Audio.hpp>


notes::notes()
{
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
void notes::play_do1()
{
    if (sound_do.getStatus() != sf::Sound::Playing)
        sound_do.play();
}

void notes::stop_do1() {

    if (sound_do.getStatus() == sf::Sound::Playing)
        sound_do.stop();
}


void notes::play_dodiez() {

    if (sound_dodiez.getStatus() != sf::Sound::Playing)
        sound_dodiez.play();
}

void notes::stop_dodiez() {

    if (sound_dodiez.getStatus() == sf::Sound::Playing)
        sound_dodiez.stop();
}


void notes::play_re()
{
        if (sound_re.getStatus() != sf::Sound::Playing)
            sound_re.play();
}

void notes::stop_re()
{
    if (sound_re.getStatus())
        sound_re.stop();
}


void notes::play_rediez() {

    if (sound_rediez.getStatus() != sf::Sound::Playing)
        sound_rediez.play();
}

void notes::stop_rediez()
{
    if (sound_rediez.getStatus())
        sound_rediez.stop();
}


void notes::play_mi()
{
    if (sound_mi.getStatus() != sf::Sound::Playing)
        sound_mi.play();
}

void notes::stop_mi()
{
    if (sound_mi.getStatus())
        sound_mi.stop();
}


void notes::play_fa()
{
    if (sound_fa.getStatus() != sf::Sound::Playing)
        sound_fa.play();
}

void notes::stop_fa()
{
    if (sound_fa.getStatus())
        sound_fa.stop();
}


void notes::play_fadiez()
{
    if (sound_fadiez.getStatus() != sf::Sound::Playing)
        sound_fadiez.play();
}

void notes::stop_fadiez()
{
    if (sound_fadiez.getStatus())
        sound_fadiez.stop();
}


void notes::play_sol()
{
    if (sound_sol.getStatus() != sf::Sound::Playing)
        sound_sol.play();
}

void notes::stop_sol()
{
    if (sound_sol.getStatus())
        sound_sol.stop();
}


void notes::play_soldiez()
{
    if (sound_soldiez.getStatus() != sf::Sound::Playing)
        sound_soldiez.play();
}

void notes::stop_soldiez()
{
    if (sound_soldiez.getStatus())
        sound_soldiez.stop();
}


void notes::play_lya()
{
    if (sound_lya.getStatus() != sf::Sound::Playing)
        sound_lya.play();
}

void notes::stop_lya()
{
    if (sound_lya.getStatus())
        sound_lya.stop();
}


void notes::play_lyadiez()
{
    if (sound_lyadiez.getStatus() != sf::Sound::Playing)
        sound_lyadiez.play();
}

void notes::stop_lyadiez()
{
    if (sound_lyadiez.getStatus())
        sound_lyadiez.stop();
}


void notes::play_si()
{
    if (sound_si.getStatus() != sf::Sound::Playing)
        sound_si.play();
}

void notes::stop_si()
{
    if (sound_si.getStatus())
        sound_si.stop();
}


void notes::play_do2()
{
    if (sound_do2.getStatus() != sf::Sound::Playing)
        sound_do2.play();
}

void notes::stop_do2()
{
    if (sound_do2.getStatus())
        sound_do2.stop();
}



