//
// Created by pelgerr on 3/27/23.
//
#include <vector>
class Solution {
public:
    std::vector<int> twoSumtd::vector<int>& nums, int target) {
        int length = nums.size();
        std::vector<int> result;
        for (int i = 0; i <= length - 1; i++) {
            for (int j = i + 1; j <= length - 1; j++){
                if (nums[i] + nums[j] == target) {
                    result = {i, j};
                }
            }
        }
        return result;
    }
};