#include <iostream>
#include <queue>  // FIFO: First in, First out

int main()
{
    std::queue<std::string> printer;

    // add to back using push()
    printer.push("document1.pdf");
    printer.push("photo.jgp");

    std::cout << "Front: " << printer.front() << std::endl;

    // pop front
    printer.pop();

    std::cout << "Next up: " << printer.front() << std::endl;
    return 0;
}