#pragma once
#include <string>
#include <vector>
#include <memory>

class TreeItem {
public:
    TreeItem(const std::string& name);

    std::string getName() const;
    void setName(const std::string& newName);

    void addChild(std::shared_ptr<TreeItem> newChild);
    std::vector<std::shared_ptr<TreeItem>> getChilds() const;

private:
    std::vector<std::shared_ptr<TreeItem>> childs;
    std::string name;
};
