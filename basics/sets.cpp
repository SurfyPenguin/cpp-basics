#include <iostream>
#include <set>
#include <unordered_set>

int main()
{
    std::set<int> numbers;
    numbers.insert(10);
    numbers.insert(12);
    numbers.insert(5);
    numbers.insert(20);

    for (int num : numbers)
    {
        std::cout << num << std::endl;
    }

    if (numbers.count(5))
    {
        std::cout << "found " << 5 << std::endl;
    }
}