#include "Perso.hpp"

std::string Perso::getName() const {
    return name;
}

void Perso::setName(const std::string& newName) {
    name = newName;
}

int Perso::getStrength() const {
    return strength;
}

void Perso::setStrength(const int& newstrength) {
    strength = newstrength;
}

int Perso::getStrengtMod() const {
    int strmodifier = strength - 10 / 2;
}