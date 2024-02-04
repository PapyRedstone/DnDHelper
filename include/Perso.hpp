#pragma once
#include <string>
#include "TreeItem.hpp"

class Perso : public TreeItem {
public:
    Perso(const std::string& name);
    ~Perso() = default;

    int getStrength() const;
    void setStrength(const int& newstrength);
    int getStrengthMod() const;
    int getDexterity() const;
    void setDexterity() const;
    int getDexterityMod() const;
    int getConstitution() const;
    void setConstitution() const;
    int getConstitutionMod() const;
    int getIntelligence() const;
    void setIntelligence() const;
    int getIntelligenceMod() const;
    int getWisdom() const;
    void setWisdom() const;
    int getWisdomMod() const;
    int getCharisma() const;
    void setCharisma() const;
    int getCharismaMod() const;
private:
    int strength, dexterity, constitution, intelligence, wisdom, charisma;
};
