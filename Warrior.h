#ifndef WARRIOR_H
#define WARRIOR_H

#include "GameCharacter.h"

class Warrior : public GameCharacter {
private:
    int swordDurability;

public:
    Warrior(const std::string& charName, int charHealth, int durability);

    void attack() override;
};

#endif