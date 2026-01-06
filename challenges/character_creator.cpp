#include <iostream>
#include <vector>
#include <string>

struct Player
{
    std::string name;
    int health;

    Player(std::string n, int h)
    {
        name = n;
        if (h > 100)
        {
            health = 100;
        }
        else if (h < 0)
        {
            health = 0;
        }
        else
        {
            health = h;
        }

    }
};

int main()
{
    Player p1("Hacker", 999);
    std::cout << p1.health << std::endl; // prints 100

    return 0;
}