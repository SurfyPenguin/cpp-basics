#include <iostream>
#include <ctime>
#include <cstdlib>

const int MAX_HP = 100;

class Creature
{
protected:
    std::string name;
    int hp;
    int totalHp;
    int damage;

    int setValueInRange(int value, int start, int end)
    {
        if (start > end) std::swap(start, end);

        if (value < start)
        {
            return start;
        }
        else if (value > end) 
        {
            return end;
        }
        else 
        {
            return value;
        }
    }

public:
    Creature(std::string name, int hp, int damage)
    {
        this->name = name;
        this->hp = setValueInRange(hp, 0, MAX_HP);
        this->totalHp = this->hp;
        this->damage = setValueInRange(damage, 0, MAX_HP);
    }

    bool isAlive()
    {
        return this->hp > 0;
    }

    std::string getName()
    {
        return this->name;
    }

    int getHealth()
    {
        return this->hp;
    }

    void takeDamage(int dmg)
    {
        int hpAfterDamage = this->hp - dmg;
        this->hp = setValueInRange(hpAfterDamage, 0, MAX_HP);
    }

    virtual void attack(Creature& target) = 0;

    // safety net
    virtual ~Creature() {}
};

class Player : public Creature
{
public:
    using Creature::Creature;

    void attack(Creature& target) override
    {
        int myDmg = this->damage;

        target.takeDamage(myDmg);

        std::cout << this->name << " hits " << target.getName() << " for " << myDmg << " HP!\n";
    }

    void heal()
    {
        int hpAfterHeal = this->hp + 25;
        this->hp = setValueInRange(hpAfterHeal, 0, this->totalHp); 
    }
};

class Goblin : public Creature
{
public:
    using Creature::Creature;

    void attack(Creature& target) override
    {
        int goblinDmg = this->damage;

        target.takeDamage(goblinDmg);

        std::cout << "Goblin scratches " << target.getName() << " for " << goblinDmg << " HP!\n";
    }
};

class Boss : public Creature
{
public:
    using Creature::Creature;

    void attack(Creature& target) override
    {
        int bossDmg = this->damage;
        if (rand() % 2)
        {
            bossDmg *= 2;
            std::cout << "CRITICAL HIT! ";
        }

        target.takeDamage(bossDmg);
        std::cout << "Boss smashes " << target.getName() << " and deals " << bossDmg << "HP!\n";
    }
};

int main()
{
    srand(time(0)); // Seed the random number generator
    Player hero("Hero", 100, 15);
    
    return 0;
}
