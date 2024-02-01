#include "Perso.hpp"

Perso::Perso(const std::string& name) :TreeItem{ name } {}

int Perso::getStrength() const {
    return strength;
}

void Perso::setStrength(const int& newstrength) {
    strength = newstrength;
}

int Perso::getStrengtMod() const {
    return (strength - 10) / 2;
}