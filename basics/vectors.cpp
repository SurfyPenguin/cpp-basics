#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(9);
    numbers.push_back(4);

    for (int i : numbers) {
        std::cout << i << std::endl;
    }
    

    return 0;
}
