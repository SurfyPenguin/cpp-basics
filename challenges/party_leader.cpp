#include <iostream>
#include <vector>

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
    Player p1("Rom", 45);
    Player p2("Sam", 60);
    Player p3("Yusef", 50);

    Player* leader = &p1;
    leader->takeDamage(20);

    std::vector<Player*> party;
    party.push_back(&p1);
    party.push_back(&p2);
    party.push_back(&p3);

    for (Player* leader : party)
    {
        leader->takeDamage(5);
    }

    return 0;
}