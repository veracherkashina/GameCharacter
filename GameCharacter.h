#ifndef GAME_CHARACTER_H
#define GAME_CHARACTER_H

#include <string>

class GameCharacter {
protected:
    std::string name;
    int health;

public:
    GameCharacter(const std::string& charName, int charHealth);
    virtual ~GameCharacter() = default;

    void printInfo() const;
    virtual void attack();
};

#endif 