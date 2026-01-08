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
    Player p1("Hero", 100);

    Player* ptr = &p1;

    // Follow the arrow to the object, then the function
    ptr->takeDamage(10);

    // Creates a player on the Heap & returns a POINTER
    Player* enemy = new Player("Goblin", 50);

    enemy->takeDamage(10);

    delete enemy; // must delete
    
    return 0;
}