#include <iostream>
#include <list>

int main() {

    std::list <std::string> groceries;

    groceries.push_back("orange");
    groceries.push_back("papaya");
    groceries.push_back("grapes");

    for (std::string item : groceries) {
        std :: cout << item << std :: endl;
    }
    return 0;
}