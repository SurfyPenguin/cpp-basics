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

    virtual void attack()
    {
        std::cout << "Enemy attacks!\n";
    }
};

class Goblin : public Enemy
{
public:
    Goblin(int hp) : Enemy(hp) {}

    void attack() override
    {
        std::cout << "Goblin stabs with knife!\n";
    }

    void stealGold()
    {
        std::cout << "Goblin steals 5 gold!\n";
    }
};

class Dragon : public Enemy
{
public:
    Dragon(int hp) : Enemy(hp) {}

    void attack() override
    {
        std::cout << "Dragon burns you to ash!\n";
    }

    void breatheFire()
    {
        std::cout << "Dragon breathes fire!\n";
    }
};

int main()
{
    Enemy* monster = new Dragon(200);
    monster->attack();

    delete monster;
    return 0;
}