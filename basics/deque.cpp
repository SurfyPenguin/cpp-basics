#include <iostream>
#include <deque>

int main()
{
    std::deque<int> cards;

    // add to back (like vector)
    cards.push_back(10);
    cards.push_back(20);

    // add to front (unique to deque
    cards.push_front(5);
    cards.push_front(30);

    // access like an array
    std::cout << "First card: " << cards[0] << std::endl;

    // remove from front
    cards.pop_front();

    return 0;
}