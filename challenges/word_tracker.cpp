// The Challenge: "Undo" Button
// Goal: Implement a program that accepts words, stores them, and allows removing the last
// one. Commands to Implement:
//     1. (Any Word) -> Add it to the vector
//     2. undo -> Remove the last word added
//     3. show -> Print the full sentence so far
//     4. quit -> Exit the program.

#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> buffer;
    std::string choice;
    
    while (true)
    {
        std::cout << "Type words, 'undo', 'show', or 'quit'.\n";
        std::cout << ">> ";
        std::cin >> choice;

        if (choice == "quit")
        {
            std::cout << "quitting...\n";
            break;
        }

        else if (choice == "undo")
        {
            if (buffer.empty())
            {
                std::cout << "Nothing to undo!\n";
            }
            else
            {
                std::string last = buffer.back();
                buffer.pop_back();
                std::cout << "Removing: " << last << std::endl;
            }
        }
        else if (choice == "show")
        {
            std::cout << "Showing:\n";
            for (const std::string& text : buffer)
            {
                std::cout << text << " ";
            }
            std::cout << "\n";
        }
        else
        {
            buffer.push_back(choice);
        }

    }
    

    return 0;
}