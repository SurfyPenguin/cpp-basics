#include <iostream>
#include <stack>

int main()
{
    std::string input;
    std::cout << "expression: ";
    std::cin >> input;
    std::stack<char> brackets;

    for (char c : input)
    {
        if (c == '(')
        {
            brackets.push(c);
        }

        if (c == ')')
        {
            if (brackets.empty())
            {
                std::cout << "Invalid!" << std::endl;
                return 0;
            }
            else
            {
                brackets.pop();
            }
        }
    }

    if (brackets.empty())
    {
        std::cout << "Balanced!" << std::endl;
    }
    else
    {
        std::cout << "Invalid" << std::endl;
    }

    return 0;
}