#ifndef MAGE_H
#define MAGE_H

#include "GameCharacter.h"

class Mage : public GameCharacter {
private:
    int mana;

public:
    Mage(const std::string& charName, int charHealth, int initialMana);

    void attack() override;
};

#endif