#include "TreeItem.hpp"

TreeItem::TreeItem(const std::string& name) :childs{}, name{ name } {}


void TreeItem::addChild(std::shared_ptr<TreeItem> newChild) {
    childs.push_back(newChild);
}

std::vector<std::shared_ptr<TreeItem>> TreeItem::getChilds() const {
    return childs;
}

std::string TreeItem::getName() const {
    return name;
}

void TreeItem::setName(const std::string& newName) {
    name = newName;
}