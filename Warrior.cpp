
#include <iostream>
#include <string>

#include "Warrior.h"
#include "Character.h"

using namespace std;
    Warrior::Warrior(const string&name, double health, double attackStrength, const string &allegiance)
    : Character(WARRIOR,name,health,attackStrength), allegiance(allegiance){} 
    
    void Warrior::attack(Character &opponent) {
      if (opponent.getType() == WARRIOR) {
            Warrior &opp = dynamic_cast<Warrior &>(opponent);
            if (allegiance == opp.allegiance) {
                cout << "Warrior " << name <<" does not attack Warrior "<< opponent.getName() << "." << endl;
                cout << "They share an allegiance with " << opp.allegiance << "." << endl;
                return;
            }
            }
                double damage = 0.0;
                damage = (health / MAX_HEALTH) * attackStrength;
                opponent.damage(damage);
                cout << "Warrior " << name <<" attacks "<< opponent.getName() << " --- SLASH!!" << endl;
                cout << opponent.getName() << " takes " << damage <<" damage." << endl;
            }
