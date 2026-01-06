#include <iostream>
#include <string>
#include <vector>

// Define the blueprint (The struct)
// usually done outside of main()
struct Player 
{
    std::string name;
    int health;
    int score;
};

int main()
{
    // create variable of this new type
    Player p1;
    p1.name = "Hero";
    p1.health = 100;
    p1.score = 5000;

    // quick initializaton
    Player p2 = {"Villain", 1000, 0};

    // access data
    std::cout << p1.name << " has " << p1.health << std::endl;
    std::cout << p2.name << " spawned with health " << p2.health << std::endl;

    // [x] putting structs in a vector
    std::vector<Player> server;

    server.push_back({"Alice", 80, 1000});
    server.push_back({"Bob", 50, 100});

    for (const Player& p: server)
    {
        std::cout << p.name << " : " << p.score << std::endl;
    }

    return 0;
}