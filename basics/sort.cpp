#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> nums = {50, 10, 40, 20, 30};

    std::sort(nums.begin(), nums.end());

    for (const int& num : nums)
    {
        std::cout << num << "\n";
    }

    std::sort(nums.begin(), nums.end(), std::greater<int>());
    for (const int& num: nums)
    {
        std::cout << num << "\n";
    }
    return 0;
}