#ifndef BASKETBALLPLAYER_H
#define BASKETBALLPLAYER_H

#include <string>
using namespace std;

class BasketballPlayer {
protected:
    string playerName;      // Имя игрока
    int jerseyNumber;       // Игровой номер
    float height;           // Рост в метрах
    int experience;         // Количество лет опыта
    bool isActive;          // В игре или нет

public:
    // Конструктор
    BasketballPlayer(string name, int number, float h, int exp);
    
    // Виртуальные методы
    virtual void playGame() = 0;
    virtual void stopGame() = 0;
    virtual void showInfo() = 0;
    
    // Геттеры
    string getName() { return playerName; }
    int getNumber() { return jerseyNumber; }
    float getHeight() { return height; }
    int getExperience() { return experience; }
    bool getStatus() { return isActive; }
    
    virtual ~BasketballPlayer() {}
};

#endif