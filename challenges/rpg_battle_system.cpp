#include <iostream>

class Player
{
    std::string name;
    int hp;

public:
    Player(std::string name, int hp)
    {
        this->name = name;

        if (hp < 0) this->hp = 0;
        else if (hp > 100) this->hp = 100;
        else this->hp = hp;
    }

    bool isAlive()
    {
        return hp > 0;
    }

    void takeDamage(int damage)
    {
        hp -= damage;
        if (hp < 0) hp = 0;

        std::cout << name << " took damage! HP is now " << hp << "." << std::endl;
    }
};

int main()
{
    Player boss("Boss", 100);

    while (boss.isAlive())
    {
        boss.takeDamage(30);
    }

    std::cout << "Boss defeated" << std::endl;
    return 0;
}