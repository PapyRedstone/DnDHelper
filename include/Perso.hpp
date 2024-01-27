#pragma once
#include <string>

class Perso {
public:
    Perso() = default;
    ~Perso() = default;

    std::string getName() const;
    void setName(const std::string& newName);

private:
    std::string name;
    int strength, dexterity;
};