#include <iostream>
#include <deque>

int main()
{
    std::deque<int> window;

    while (true)
    {
        int input;

        std::cout << "> ";
        std::cin >> input;

        window.push_back(input);
        
        if (window.size() > 3)
        {
            window.pop_front();
        }

        std::cout << "Window: ";
        for (int item : window)
        {
            std::cout << item << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}