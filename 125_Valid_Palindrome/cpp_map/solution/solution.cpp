#include "solution.h"
#include <iostream>
#include <unordered_map>
#include <algorithm>


bool Solution::isPalindrome(std::string s)
{
    int left = 0;
    int right = s.length() - 1;
    while(left < right) {
        if(!isalnum(s[left]) ) {
            left++;
            continue;
        }

        if(!isalnum(s[right]) ) {
            right--;
            continue;
        }

        if(tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}