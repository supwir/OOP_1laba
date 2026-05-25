#define _AMD64_ 
#include <windows.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "basketballplayer.h"
#include "pointguard.h"
#include "center.h"

using namespace std;

int main() {

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    // Инициализация генератора случайных чисел
    srand(time(0));
    
    cout << "================================================" << endl;
    cout << "            БАСКЕТБОЛЬНАЯ КОМАНДА:              " << endl;
    cout << "================================================" << endl;
    
    // СОЗДАНИЕ ОБЪЕКТОВ С РАЗНЫМИ КОНСТРУКТОРАМИ
    
    // Разные конструкторы PointGuard
    PointGuard pg1("Стефен Карри", 30, 1.88, 14, 6.5, 0.8, 42.5, 10);  // полный
    PointGuard pg2("Егор Дёмин", 7, 1.85, 3);                  // без статистики
    PointGuard pg3("Купер Флэг", 11);                               // минимальный
    


    
    // Разные конструкторы Center
    Center c1("Никола Йокич", 15, 2.11, 9, 11.8, 0.9, 7.5, 9.5);       // полный
    Center c2("Владислав Голдин", 33, 2.10, 5);                          // без статистики
    Center c3("Виктор Вембоньяма", 44);                                       // минимальный
    
    
    

    cout << "\n=== ПРОВЕРКА КОНСТРУКТОРОВ ===" << endl;
    
    cout << "\n--- РАЗЫГРЫВАЮЩИЕ ---" << endl;
    cout << "pg1 (полный): " << pg1.getName() << " | рост: " << pg1.getHeight() 
        << "м | опыт: " << pg1.getExperience() << " лет" << endl;
    cout << "pg2 (без стат): " << pg2.getName() << " | рост: " << pg2.getHeight() 
        << "м | опыт: " << pg2.getExperience() << " лет" << endl;
    cout << "pg3 (мин): " << pg3.getName() << " | рост: " << pg3.getHeight() 
        << "м | опыт: " << pg3.getExperience() << " лет" << endl;
    
    cout << "\n--- ЦЕНТРОВЫЕ ---" << endl;
    cout << "c1 (полный): " << c1.getName() << " | рост: " << c1.getHeight() 
        << "м | опыт: " << c1.getExperience() << " лет" << endl;
    cout << "c2 (без стат): " << c2.getName() << " | рост: " << c2.getHeight() 
        << "м | опыт: " << c2.getExperience() << " лет" << endl;
    cout << "c3 (мин): " << c3.getName() << " | рост: " << c3.getHeight() 
        << "м | опыт: " << c3.getExperience() << " лет" << endl;
    


    BasketballPlayer* team[] = {&pg1, &pg2, &pg3, &c1, &c2 , &c3};

   
    cout << "\nИгрок 1: ";
    team[0]->playGame();  // Стефен Карри
    cout << "\nИгрок 2: ";
     team[1]->playGame();  // Новый разыгрывающий
     cout << "\nИгрок 3: ";
     team[2]->playGame();  // Молодой талант
     cout << "\nИгрок 4: ";
     team[3]->playGame();  // Никола Йокич
     cout << "\nИгрок 5: ";
     team[4]->playGame();  // Новый центровой
     cout << "\nИгрок 6: ";
     team[5]->playGame();  // Юный гигант
     
     //ИНФОРМАЦИЯ ОБ ИГРОКАХ (без цикла)
     cout << "\n\nИНФОРМАЦИЯ ОБ ИГРОКАХ:" << endl;
     cout << "\nИгрок 1: ";
     team[0]->showInfo();
     cout << "Игрок 2: ";
     team[1]->showInfo();
     cout << "Игрок 3: ";
     team[2]->showInfo();
     cout << "Игрок 4: ";
     team[3]->showInfo();
     cout << "Игрок 5: ";
     team[4]->showInfo();
     cout << "Игрок 6: ";
     team[5]->showInfo();
     
     cout << "\n" << string(60, '=') << "\n" << endl;
     
     // УНИКАЛЬНЫЕ МЕТОДЫ ДЛЯ РАЗЫГРЫВАЮЩИХ
     cout << "УНИКАЛЬНЫЕ МЕТОДЫ РАЗЫГРЫВАЮЩИХ:" << endl;
     
     // Для Стефена Карри (индекс 0)
     cout << "\n--- " << pg1.getName() << " ---" << endl;
     dynamic_cast<PointGuard*>(team[0])->organizeFastBreak();
     dynamic_cast<PointGuard*>(team[0])->callPlay();
     dynamic_cast<PointGuard*>(team[0])->shootThreePointer();
     
     // Для нового разыгрывающего (индекс 1)
     cout << "\n--- " << pg2.getName() << " ---" << endl;
     dynamic_cast<PointGuard*>(team[1])->organizeFastBreak();
     dynamic_cast<PointGuard*>(team[1])->shootThreePointer();
     
     // Для молодого таланта (индекс 2)
     cout << "\n--- " << pg3.getName() << " ---" << endl;
     dynamic_cast<PointGuard*>(team[2])->organizeFastBreak();
     dynamic_cast<PointGuard*>(team[2])->callPlay();
     
     cout << "\n" << string(60, '=') << "\n" << endl;
     
     // УНИКАЛЬНЫЕ МЕТОДЫ ДЛЯ ЦЕНТРОВЫХ
     cout << "УНИКАЛЬНЫЕ МЕТОДЫ ЦЕНТРОВЫХ:" << endl;
     
     // Для Николе Йокича (индекс 3)
     cout << "\n--- " << c1.getName() << " ---" << endl;
     dynamic_cast<Center*>(team[3])->dominatePaint();
     dynamic_cast<Center*>(team[3])->setScreen();
     dynamic_cast<Center*>(team[3])->blockShot();
     
     // Для нового центрового (индекс 4)
     cout << "\n--- " << c2.getName() << " ---" << endl;
     dynamic_cast<Center*>(team[4])->dominatePaint();
     dynamic_cast<Center*>(team[4])->setScreen();
     
     // Для юного гиганта (индекс 5)
     cout << "\n--- " << c3.getName() << " ---" << endl;
     dynamic_cast<Center*>(team[5])->dominatePaint();
     dynamic_cast<Center*>(team[5])->blockShot();
     
     cout << "\n" << string(60, '=') << "\n" << endl;
     
     // ОБНОВЛЕННАЯ ИНФОРМАЦИЯ ПОСЛЕ ДЕЙСТВИЙ
     cout << "ИНФОРМАЦИЯ ПОСЛЕ ДЕЙСТВИЙ:" << endl;
     cout << "\nИгрок 4 (Йокич): ";
     team[3]->showInfo();
     cout << "Игрок 5 (Новый центровой): ";
     team[4]->showInfo();
     
     cout << "\n" << string(60, '=') << "\n" << endl;
     
     // ЗАВЕРШЕНИЕ ИГРЫ
     cout << "ЗАВЕРШЕНИЕ ИГРЫ:" << endl;
     cout << "\nИгрок 4: ";
     team[3]->stopGame();  // Йокич
     cout << "\nИгрок 5: ";
     team[4]->stopGame();  // Новый центровой
     
     cout << "\n" << string(60, '=') << "\n" << endl;
     cout << "ПРОГРАММА ЗАВЕРШЕНА" << endl;
     
     return 0;
     }