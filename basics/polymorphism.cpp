#include <iostream>

#include <iostream>

class Enemy
{
public:
    virtual void attack() // "virtual" tells cpp that children classes may have different version of this function
    {
        std::cout << "Enemy attacks!\n";
    }
};

class Goblin : public Enemy
{
public:
    // "override" is optional but good practice
    void attack() override 
    {
        std::cout << "Goblin Stabs!\n";
    }
};

class Dragon : public Enemy
{
public:
    void attack() override
    {
        std::cout << "Dragon breathes fire!\n";
    }
};

int main()
{
    // If you create objects normally (Dragon d),
    // overriding works even without virtual.
    // BUT, if you use Pointers (like in a game engine loop),
    // virtual is required.

    Enemy* e = new Dragon();
    e->attack(); 
    // without "virtual" output would be: "Enemy attacks!"
    // output: "Dragon breathes fire!"

    delete e;
    return 0;
}