#include <iostream>

// use inheritance when there are common attributes or functions

// Parent class (base class)
class Entity
{
public:
    std::string name;
    int hp;

    Entity(std::string name, int hp)
    {
        this->name = name;
        this->hp = hp;
    }

    void showStats()
    {
        std::cout << name << " has " << hp << " HP.\n";
    }
};

// The Child class (Derived class)
// "A Player IS AN Entity"
class Player : public Entity
{
public:
    int mana; // Player has extra stuff

    Player(std::string name, int hp, int mana) : Entity(name, hp) // The constructor has to set up the Parent part first!
    {
        this->mana = mana;
    }

    void castSpell()
    {
        std::cout << name << " casts Fireball! Mana: " << mana << "\n";
    }
};

int main()
{
    Player p1("Merlin", 100, 50);

    p1.showStats(); // inherited
    p1.castSpell(); // unique

    return 0;
}