#pragma once
#include <string>

class Perso {
public:
    Perso() = default;
    ~Perso() = default;

    std::string getName() const;
    void setName(const std::string& newName);

    int getStrength() const;
    void setStrength(const int& newstrength);
    int getStrengtMod() const;
private:
    std::string name;
    int strength, dexterity;
};
