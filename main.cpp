#include <iostream>
#include "GameCharacter.h"
#include "Warrior.h"
#include "Mage.h"
#include "Archer.h"

int main() {
    Warrior warrior("Mike Wheeler", 150, 3);
    Mage mage("Will Byers", 90, 35);         
    Archer archer("Robin Buckley", 110, 2);

    GameCharacter* characterPtr = nullptr;

    std::cout << "Biy u Stranger Things:\n\n";

    characterPtr = &warrior;
    characterPtr->printInfo();
    characterPtr->attack();
    std::cout << "\n";

    characterPtr = &mage;
    characterPtr->printInfo();
    characterPtr->attack();
    characterPtr->attack();
    std::cout << "\n";

    characterPtr = &archer;
    characterPtr->printInfo();
    characterPtr->attack();
    std::cout << "\n";

    return 0;
}