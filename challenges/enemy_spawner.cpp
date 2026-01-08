#include <iostream>

class Enemy
{
public:
    int hp;

    Enemy(int hp)
    {
        if (hp < 0) hp = 0;
        else this->hp = hp;
    }

    void attack()
    {
        std::cout << "Enemy attacks!\n";
    }
};

class Goblin : public Enemy
{
public:
    Goblin(int hp) : Enemy(hp) {}

    void stealGold()
    {
        std::cout << "Goblin steals 5 gold!\n";
    }
};

class Dragon : public Enemy
{
public:
    Dragon(int hp) : Enemy(hp) {}

    void breatheFire()
    {
        std::cout << "Dragon breathes fire!\n";
    }
};

int main()
{
    Goblin goblin(20);
    Dragon dragon(100);

    goblin.attack();
    dragon.attack();

    goblin.stealGold();
    dragon.breatheFire();

    return 0;
}