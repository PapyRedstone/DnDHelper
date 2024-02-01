#include "TreeItem.hpp"

TreeItem::TreeItem() :childs{} {}


void TreeItem::addChild(const TreeItem& newChild) {
    childs.push_back(newChild);
}

std::vector<TreeItem> TreeItem::getChilds() const {
    return childs;
}