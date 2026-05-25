#include "center.h"
#include <iostream>
#include <cstdlib>
using namespace std;

// Конструктор 1: полный
Center::Center(string name, int number, float h, int exp,
               float rebounds, float blocks, float dunk, float post)
    : BasketballPlayer(name, number, h, exp),
      reboundsPerGame(rebounds), blocksPerGame(blocks),
      dunkPower(dunk), postSkill(post) 
{}

// Конструктор 2: без статистики
Center::Center(string name, int number, float h, int exp)
    : BasketballPlayer(name, number, h, exp),
      reboundsPerGame(8.5), blocksPerGame(1.5),
      dunkPower(7.5), postSkill(6.5) 
{}

// Конструктор 3: минимальный
Center::Center(string name, int number)
    : BasketballPlayer(name, number, 2.10, 3),
      reboundsPerGame(8.5), blocksPerGame(1.5),
      dunkPower(7.5), postSkill(6.5) 
{}

void Center::playGame() {
    isActive = true;
    cout << playerName << " (центровой) вышел на паркет!" << endl;
    cout << "  Номер: #" << jerseyNumber << " | Рост: " << height << "м" << endl;
    cout << "  Статистика: " << reboundsPerGame << " подборов, " 
         << blocksPerGame << " блок-шотов" << endl;
    cout << "  Сила данков: " << dunkPower << "/10 | Игра в посте: " << postSkill << "/10" << endl;
}

void Center::stopGame() {
    isActive = false;
    cout << playerName << " (центровой) завершил игру." << endl;
}

void Center::showInfo() {
    cout << "Игрок: " << playerName 
         << " | Позиция: Центровой"
         << " | Статус: " << (isActive ? "В ИГРЕ" : "НА СКАМЕЙКЕ")
         << " | Номер: #" << jerseyNumber
         << " | Рост: " << height << "м"
         << " | Подборы: " << reboundsPerGame
         << " | Блоки: " << blocksPerGame << endl;
}

void Center::dominatePaint() {
    if (!isActive) {
        cout << playerName << ": Сначала выйдите на площадку!" << endl;
        return;
    }
    
    cout << playerName << " доминирует в краске! ";
    if (dunkPower > 8) {
        cout << "Данк с силой " << dunkPower << " сносит кольцо!" << endl;
    } else {
        cout << "Продавливает защиту." << endl;
    }
}

void Center::setScreen() {
    if (!isActive) {
        cout << playerName << ": Сначала выйдите на площадку!" << endl;
        return;
    }
    cout << playerName << " ставит мощный заслон! Рост " << height << "м создает стену." << endl;
}

void Center::blockShot() {
    if (!isActive) {
        cout << playerName << ": Сначала выйдите на площадку!" << endl;
        return;
    }
    
    cout << playerName << " пытается заблокировать бросок! ";
    
    // Симуляция блок-шота (60% вероятности)
    bool isBlock = (rand() % 100) < 60;
    if (isBlock) {
        cout << "БЛОК! Мяч улетает на трибуны!" << endl;
    } else {
        cout << "Не дотянулся..." << endl;
    }
}