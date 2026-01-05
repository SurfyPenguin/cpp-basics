#include <iostream>
#include <stack>

int main()
{
    std::stack<std::string> books;

    // add to top: push
    books.push("Harry Potter");
    books.push("Lord of the Rings");

    // see what is on top
    std::cout << "Top book: " << books.top() << std::endl;

    // remove top
    books.pop();

    // check if empty
    if (!books.empty())
    {
        std::cout << "Next book: " << books.top() << std::endl;
    }

    return 0;
}