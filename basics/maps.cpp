#include <iostream>
#include <map>

int main() {
        
    std::map<std::string, int> ages;
    ages["Alice"] = 25;
    ages["Bob"] = 30;

    for (auto& item : ages) {
        std::cout << item.first << ": " << item.second << std::endl;
    }

    std::map<std::string, std::map<std::string, int>> shop;

    shop["fruits"]["orange"] = 14;
    shop["fruits"]["mango"] = 25;
    shop["vegetables"]["potato"] = 30;
    shop["vegetables"]["cauliflower"] = 35;

    for (std::pair<std::string, std::map<std::string, int>> category : shop)
    {
        std::map<std::string, int>& innerPair = category.second;

        for (std::pair<const std::string, int>& item : innerPair )
        {
            std::cout << item.first << ": " << item.second << std::endl;
        }
    }

    for (const auto& outerPair : shop) {
        std::cout << outerPair.first << ": ";



        for (const auto& innerPair : outerPair.second) {
            std::cout << innerPair.first << ": " << innerPair.second << std::endl;
        }
    }

    return 0;
}