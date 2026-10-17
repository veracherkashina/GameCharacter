#include "GameCharacter.h"
#include <iostream>

GameCharacter::GameCharacter(const std::string& charName, int charHealth)
    : name(charName), health(charHealth) {}

void GameCharacter::printInfo() const {
    std::cout << "Personazh: " << name << ", zdorovya: " << health << "\n";
}

void GameCharacter::attack() {
    std::cout << name << " vikonuye bazovu ataku.\n";
}