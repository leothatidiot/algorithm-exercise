#include <vector>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
      // int a[nums.size()] = {0};
      std::vector<int> a(nums.size()+1);
      for(auto i : nums) {
        a[i] = 1;
      }
      for(int i=0; i<a.size(); i++) {
        if(a[i]==0) return i;
      }
      return -1;
    }
};