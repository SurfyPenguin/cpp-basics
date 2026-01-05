#include <iostream>
#include <queue>

int main()
{
    std::queue<std::string> jobs;

    while (true)
    {
        std::string input;
        std::cout << ">> ";
        std::cin >> input;

        if (input == "count")
        {
            std::cout << "Jobs pending: " << jobs.size() << std::endl;
        }

        else if (input == "print")
        {
            if (jobs.empty())
            {
                std::cout << "Queue empty!" << std::endl;
            }
            else
            {
                std::cout << "Printing: " << jobs.front() << std::endl;
                jobs.pop();
            }
        }
        else
        {
            jobs.push(input);
        }
    }

    return 0;
}