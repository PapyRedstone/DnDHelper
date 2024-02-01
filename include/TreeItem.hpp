#pragma once
#include <string>
#include <vector>

class TreeItem {
public:
    TreeItem();

    void addChild(const TreeItem& newChild);
    std::vector<TreeItem> getChilds() const;

private:
    std::vector<TreeItem> childs;

};
