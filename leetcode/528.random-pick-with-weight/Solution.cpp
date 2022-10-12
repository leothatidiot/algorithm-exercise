#include <vector>
#include <iostream>
#include <random>
#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> Sw; // 前n项和
    int max = 0;
    Solution(std::vector<int>& w) {
        for(auto i : w) {
            max += i;
            Sw.push_back(max);
        }
    }

    void displaySw() {
        for(auto item : Sw) {
            std::cout << item << ' ';
        }
        std::cout << std::endl << "max: " << max << std::endl;
    }

    int pickIndex() {
        int index;
        std::random_device rd;
        std::mt19937 gen(rd());
        auto rand_num = gen() % max + 1;
        return std::lower_bound(Sw.begin(), Sw.end(), rand_num) - Sw.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
