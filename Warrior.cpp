#include "Warrior.h"
#include <iostream>

Warrior::Warrior(const std::string& charName, int charHealth, int durability)
    : GameCharacter(charName, charHealth), swordDurability(durability) {}

void Warrior::attack() {
    if (swordDurability <= 0) {
        std::cout << name << " ne mozhe atakovaty, mech zlamano!\n";
        return;
    }
    swordDurability -= 1;
    std::cout << name << " atakuie mechem! Zalishok mitsnosti mecha: " << swordDurability << "\n";
}