#include <iostream>
#include "solution.h"

int main()
{
    std::cout << "01 two sum cpp map" << std::endl;

    std::vector<int> nums{1};
    int val = 2;

    Solution obj;
    int k = obj.removeElement(nums, val);
    std::cout << "k:" << k << std::endl;

    return 0;
}