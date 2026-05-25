#ifndef POINTGUARD_H
#define POINTGUARD_H

#include "basketballplayer.h"
#include <string>

class PointGuard : public BasketballPlayer {
private:
    float assistsPerGame;      // Количество передач за игру
    float stealsPerGame;       // Количество перехватов за игру
    float threePointPercent;   // Процент трехочковых
    int basketballIQ;          // Баскетбольный интеллект

public:
    // ТРИ КОНСТРУКТОРА
    PointGuard(string name, int number, float h, int exp, 
               float assists, float steals, float threePct, int iq);
    PointGuard(string name, int number, float h, int exp);
    PointGuard(string name, int number);
    
    // Переопределенные методы
    void playGame() override;
    void stopGame() override;
    void showInfo() override;
    
    // Уникальные методы
    void organizeFastBreak();
    void callPlay();
    void shootThreePointer();
    
    // Геттеры
    float getAssists() { return assistsPerGame; }
    float getSteals() { return stealsPerGame; }
    float getThreePointPercent() { return threePointPercent; }
    int getBasketballIQ() { return basketballIQ; }
};

#endif