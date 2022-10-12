class Solution {
public:
  bool containsNearbyDuplicate(vector<int>& nums, int k) {
    std::map<int, int> n2index; // <n, index>
    for (int index = 0; index < nums.size(); index++) {
      auto it = n2index.find(nums[index]);
      if (it != n2index.end()) { // 出現過
        if (index - (*it).second <= k) return true;
      }
      n2index[nums[index]] = index;
    }
    return false;
  }
};