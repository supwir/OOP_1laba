#include "basketballplayer.h"
using namespace std;

BasketballPlayer::BasketballPlayer(string name, int number, float h, int exp) 
    : playerName(name), jerseyNumber(number), height(h), experience(exp), isActive(false) {}