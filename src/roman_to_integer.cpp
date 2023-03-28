//
// Created by pelgerr on 3/27/23.
// https://leetcode.com/problems/roman-to-integer/
//
#include <map>
class Solution {
public:
    int romanToInt(string s) {
        std::map<char, int> rom_map = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int result = 0;
        for (int i = 0; i < s.size(); i++) {
            if (rom_map[s[i]] < rom_map[s[i + 1]]) {
                result -= rom_map[s[i]];
            } else {
                result += rom_map[s[i]];
            }
        }
        return result;
    }
};
