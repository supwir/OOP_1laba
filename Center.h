#ifndef CENTER_H
#define CENTER_H

#include "basketballplayer.h"
#include <string>

class Center : public BasketballPlayer {
private:
    float reboundsPerGame;     // Количество подборов за игру
    float blocksPerGame;       // Количество блок-шотов за игру
    float dunkPower;           // Сила данков (1-10)
    float postSkill;           // Мастерство игры в посте (1-10)

public:
    // ТРИ КОНСТРУКТОРА
    Center(string name, int number, float h, int exp,
           float rebounds, float blocks, float dunk, float post);
    Center(string name, int number, float h, int exp);
    Center(string name, int number);
    
    // Переопределенные методы
    void playGame() override;
    void stopGame() override;
    void showInfo() override;
    
    // Уникальные методы
    void dominatePaint();
    void setScreen();
    void blockShot();
    
    // Геттеры
    float getRebounds() { return reboundsPerGame; }
    float getBlocks() { return blocksPerGame; }
    float getDunkPower() { return dunkPower; }
    float getPostSkill() { return postSkill; }
};

#endif