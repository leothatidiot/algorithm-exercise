#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n == 0) return 0;
        vector<int> nums(n+1, 0);
        nums[1] = 1;
        for(int index=1; index<=n/2; index++) {
            nums[2*index] = nums[index];
            if(2*index+1 != n+1) {
                nums[2*index+1] = nums[index] + nums[index+1];
            }
        }
        // for(auto item : nums) {
        //     cout << item << ' ';
        // } cout << endl;
        return *max_element(nums.begin(), nums.end());
    }
};