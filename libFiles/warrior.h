#ifndef WARRIOR
#define WARRIOR

#include "character.h"

class Warrior : public Character {
    private:
        double health;
        double damage;
        int currency;
        int speed;
        vector<Item*> inventory; 
    public:
        Warrior();
        Warrior(double h, double d, int c, int s);

};


#endif