#include "Archer.h"
#include <iostream>

Archer::Archer(const std::string& charName, int charHealth, int arrows)
    : GameCharacter(charName, charHealth), arrowCount(arrows) {}

void Archer::attack() {
    if (arrowCount <= 0) {
        std::cout << name << " ne mozhe strilyaty, strily zakinchylysya!\n";
        return;
    }
    arrowCount -= 1;
    std::cout << name << " strilyaye z luka! Zalishok stril: " << arrowCount << "\n";
}