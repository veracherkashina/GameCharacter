#ifndef ARCHER_H
#define ARCHER_H

#include "GameCharacter.h"

class Archer : public GameCharacter {
private:
    int arrowCount;

public:
    Archer(const std::string& charName, int charHealth, int arrows);

    void attack() override;
};

#endif