//
// Created by pelgerr on 3/27/23.
//
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string result = "";
        int n = strs.size();
        std::sort(begin(strs), end(strs));
        std::string first = strs[0];
        std::string last = strs[n - 1];
        // Iterate through each char of the first element and compare to the last element of the now sorted vector
        // The elements with the largest difference in a sorted vector will be the first and last
        for(int i = 0; i < first.length(); i++) {
            if(first[i] == last[i]) {
                result += first[i];
            } else {
                break;
            }
        }
        return result;
    }
};

int main()
{
    // Test data
    std::vector<std::string> test_vec_0 = {"flower","flow","flight"};
    std::vector<std::string> test_vec_1 = {"dog","racecar","car"};
    std::string ans = "";
    // Instantiate the object
    Solution sol;
    ans = sol.longestCommonPrefix(test_vec_0);
    std::cout << ans << std::endl;
    ans = sol.longestCommonPrefix(test_vec_1);
    std::cout << ans << std::endl;
    return 0;
}