#include "Perso.hpp"

Perso::Perso(const std::string& name) :TreeItem{ name } {}

int Perso::getStrength() const {
    return strength;
}

void Perso::setStrength(const int& newstrength) {
    strength = newstrength;
}

int Perso::getStrengthMod() const {
    return (strength - 10) / 2;
}

int Perso::getDexterity() const {
    return dexterity;
}

void Perso::setDexterity(const int& newdexterity) {
    dexterity = newdexterity;
}

int Perso::getDexterityMod() const {
    return (dexterity - 10) / 2;
}

int Perso::getConstitution() const {
    return constitution;
}

void Perso::setConstitution(const int& newconstitution) {
    constitution = newconstitution;
}

int Perso::getConstitutionMod() const {
    return (constitution - 10) / 2;
}

int Perso::getIntelligence() const {
    return intelligence;
}

void Perso::setIntelligence(const int& newintelligence) {
    intelligence = newintelligence;
}

int Perso::getIntelligenceMod() const {
    return (intelligence - 10) / 2;
}

int Perso::getWisdom() const {
    return wisdom;
}

void Perso::setWisdom(const int& newwisdom) {
    wisdom = newwisdom;
}

int Perso::getWisdomMod() const {
    return (wisdom - 10) / 2;
}

int Perso::getCharisma() const {
    return charisma;
}

void Perso::setCharisma(const int& newcharisma) {
    charisma = newcharisma;
}

int Perso::getCharismaMod() const {
    return (charisma - 10) / 2;
}