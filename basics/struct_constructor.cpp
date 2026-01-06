#include <iostream>
#include <vector>
#include <string>

struct Item
{
    std::string name;
    int cost;
    int weight;

    // --The Constructor--
    Item(std::string n, int c, int w)
    {
        name = n;
        if (c < 0)
        {
            cost = 0;
        }
        else
        {
            cost = c;
        }
        weight = w;
    }

    void display()
    {
        std::cout << name << ": " << cost << " Gold" << std::endl;
    }
};

int main()
{
    Item sword("Sword", 100, 5);
    Item badItem("Glitch", -500, 5);

    sword.display();
    badItem.display();
    
    return 0;
}