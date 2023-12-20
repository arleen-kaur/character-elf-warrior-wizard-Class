#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

#ifndef __WARRIOR_H__
#define __WARRIOR_H__

class Warrior : public Character {
    public:
    Warrior(const string&, double, double, const string&);
    void attack(Character &);
    private:
    string allegiance;
};
#endif