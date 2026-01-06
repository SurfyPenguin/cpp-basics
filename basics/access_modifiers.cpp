#include <iostream>
#include <string>

struct Player
{
private:
    int health;

public:
    std::string name;

    Player(std::string n, int h)
    {
        name = n;
        if (health > 100) health = 100;
        else health = h;
    }

    // The GETTER
    // A read-only window to private data
    int getHealth()
    {
        return health;
    }
};


int main()
{
    Player p1("Hero", 100);
    // p1.health = 10; gives error

    std::cout << p1.getHealth() << std::endl;

    return 0;
}