#include "pointguard.h"
#include <iostream>
#include <cstdlib>
using namespace std;

// Конструктор 1: полный
PointGuard::PointGuard(string name, int number, float h, int exp, 
                       float assists, float steals, float threePct, int iq)
    : BasketballPlayer(name, number, h, exp), 
      assistsPerGame(assists), stealsPerGame(steals),
      threePointPercent(threePct), basketballIQ(iq) 
{}

// Конструктор 2: без статистики
PointGuard::PointGuard(string name, int number, float h, int exp)
    : BasketballPlayer(name, number, h, exp), 
      assistsPerGame(5.5), stealsPerGame(1.2),
      threePointPercent(36.0), basketballIQ(7) 
{}

// Конструктор 3: минимальный
PointGuard::PointGuard(string name, int number)
    : BasketballPlayer(name, number, 1.85, 2), 
      assistsPerGame(5.5), stealsPerGame(1.2),
      threePointPercent(36.0), basketballIQ(7) 
{}

void PointGuard::playGame() {
    isActive = true;
    cout << playerName << " (разыгрывающий) вышел на паркет!" << endl;
    cout << "  Номер: #" << jerseyNumber << " | Рост: " << height << "м" << endl;
    cout << "  Статистика: " << assistsPerGame << " передач, " 
         << stealsPerGame << " перехватов" << endl;
    cout << "  3-очковые: " << threePointPercent << "% | IQ: " << basketballIQ << "/10" << endl;
}

void PointGuard::stopGame() {
    isActive = false;
    cout << playerName << " (разыгрывающий) завершил игру." << endl;
}

void PointGuard::showInfo() {
    cout << "Игрок: " << playerName 
         << " | Позиция: Разыгрывающий"
         << " | Статус: " << (isActive ? "В ИГРЕ" : "НА СКАМЕЙКЕ")
         << " | Номер: #" << jerseyNumber
         << " | Рост: " << height << "м"
         << " | Передачи: " << assistsPerGame
         << " | 3-очковые: " << threePointPercent << "%" << endl;
}

void PointGuard::organizeFastBreak() {
    if (!isActive) {
        cout << playerName << ": Сначала выйдите на площадку!" << endl;
        return;
    }
    cout << playerName << " организует быстрый прорыв! ";
    if (basketballIQ > 8) {
        cout << "Идеальное решение с IQ " << basketballIQ << "!" << endl;
    } else {
        cout << "Атака развивается..." << endl;
    }
}

void PointGuard::callPlay() {
    if (!isActive) {
        cout << playerName << ": Сначала выйдите на площадку!" << endl;
        return;
    }
    cout << playerName << " показывает комбинацию: 'Pick and roll справа!'" << endl;
}

void PointGuard::shootThreePointer() {
    if (!isActive) {
        cout << playerName << ": Сначала выйдите на площадку!" << endl;
        return;
    }
    
    cout << playerName << " бросает трехочковый! ";
    
    // Симуляция броска на основе процента
    bool isMade = (rand() % 100) < threePointPercent;
    if (isMade) {
        cout << "Попадание! (+3 очка)" << endl;
    } else {
        cout << "Мимо!" << endl;
    }
}