#include <iostream>
#include <string>
#include <vector>

struct Item
{
    std::string name;
    int cost;
    int weight;

    void display()
    {
        std::cout << "---" << name << "---" << std::endl;
        std::cout << "Cost: " << cost << " Gold" << std::endl;
        std::cout << "Weight: " << weight << "kg" << std::endl;
    }

    void applyDiscount(int percent)
    {
        cost -= cost * percent / 100;
    }
};

int main()
{
    Item sword = {"Sword", 100, 5};
    sword.display();

    sword.applyDiscount(30);
    sword.display();

    return 0;
}