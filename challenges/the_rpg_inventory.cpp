#include <iostream>
#include <vector>
#include <string>

struct Item
{
    std::string name;
    int cost;
    int weight;

    // adding member functions
    void display()
    {
        std::cout << "---" << name << "---" << std::endl;
        std::cout << "Cost: " << cost << " Gold" << std::endl;
        std::cout << "Weight: " << weight << "kg" << std::endl;
    }
};

int main()
{
    std::vector<Item> backpack;

    backpack.push_back({"Sword", 100, 5});
    backpack.push_back({"Potion", 10, 1});
    backpack.push_back({"Shield", 5, 10});

    Item mostExpensive = {};
    int highestPrice = 0;
    for (const Item& item : backpack)
    {
        if (item.cost > highestPrice)
        {
            highestPrice = item.cost;
            mostExpensive = item;
        }
    }
    std::cout << "Most Expensive Item: " << mostExpensive.name << std::endl;
    std::cout << "Cost: " << mostExpensive.cost << std::endl;

    // display sword
    Item sword = {"Sword", 100, 5};
    sword.display();

    return 0;
}