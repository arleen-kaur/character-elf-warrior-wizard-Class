#include <iostream>
#include <string>
#include "Elf.h"
#include "Character.h"

using namespace std;

Elf::Elf(const string& name, double health, double attackStrength, const string &familyName)
: Character(ELF,name,health,attackStrength), familyName(familyName){} 

void Elf::attack(Character &opponent) {
        if (opponent.getType() == ELF) {
            Elf &opp = dynamic_cast<Elf &>(opponent);
            if (opp.familyName == familyName) {
                cout << "Elf " << name <<" does not attack Elf "<< opponent.getName() << "." << endl;
                cout << "They are both members of the " << familyName << " family." << endl;
            return;
            }
        }
            double damage = 0.0;
            damage = (health / MAX_HEALTH) * attackStrength;
            opponent.damage(damage);
            cout << "Elf " << name <<" shoots an arrow at " << opponent.getName() << " --- TWANG!!" << endl;
            cout << opponent.getName() << " takes " << damage <<" damage." << endl;
}
