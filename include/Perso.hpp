#pragma once
#include <string>
#include "TreeItem.hpp"

class Perso : public TreeItem {
public:
    Perso(const std::string& name);
    ~Perso() = default;

    int getStrength() const;
    void setStrength(const int& newstrength);
    int getStrengtMod() const;
private:
    int strength, dexterity;
};
