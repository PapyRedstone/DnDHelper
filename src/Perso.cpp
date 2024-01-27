#include "Perso.hpp"

std::string Perso::getName() const {
    return name;
}

void Perso::setName(const std::string& newName) {
    name = newName;
}