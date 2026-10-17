#include "Mage.h"
#include <iostream>

Mage::Mage(const std::string& charName, int charHealth, int initialMana)
    : GameCharacter(charName, charHealth), mana(initialMana) {}

void Mage::attack() {
    const int manaCost = 20;
    if (mana < manaCost) {
        std::cout << name << " ne mozhe chakluvaty, nedostatnyo many! (Zalishok: " << mana << ")\n";
        return;
    }
    mana -= manaCost;
    std::cout << name << " vikoristovuye Fireball! Vitracheno " << manaCost << " many. Zalishok many: " << mana << "\n";
}