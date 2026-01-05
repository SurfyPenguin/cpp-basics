#include <algorithm>
#include <iostream>
#include <vector>


int main()
{
    std::vector<int> scores = {150, 400, 100, 350, 200};

    std::cout << "Original Scores:\n";
    for (const int& i : scores)
    {
        std::cout << i << std::endl;
    }

    std::sort(scores.begin(), scores.end(), std::greater<int>());
    std::cout << "Top 3:\n";

    for (int i = 0; i < std::min((int)scores.size(), 3); i++)
    {
        std::cout << scores[i] << std::endl;
    }
    return 0;
}