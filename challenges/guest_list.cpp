#include <iostream>
#include <set>

int main()
{
    std::set<std::string> guests;
    while (true)
    {
        std::cout << "Name: ";
        std::string input;
        std::cin >> input;

        if (input == "done")
        {
            break;
        }

        if (guests.count(input))
        {
            std::cout << "Duplicate!!\n";
        }
        else
        {
            guests.insert(input);
        }
    }

    for (std::string guest : guests)
    {
        std::cout << guest << " ";
    }
    std::cout << "\n";
    
    return 0;
}