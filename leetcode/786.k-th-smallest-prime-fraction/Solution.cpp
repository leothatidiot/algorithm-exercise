#include <vector>
#include <algorithm>
#include <tuple>

class Solution {
public:
  std::vector<int> kthSmallestPrimeFraction(std::vector<int>& arr, int k) {
    // int a[arr.size()*arr.size()-1] = {0};
    std::vector<std::tuple<double, int, int>> v;
    for (int i = 0; i < arr.size(); i++) {
      for(int j = i+1; j < arr.size(); j++) {
        v.push_back({arr[i]/(double)arr[j], arr[i],arr[j]});
      }
    }
    sort(v.begin(), v.end());
    return {std::get<1>(v[k-1]), std::get<2>(v[k-1])};
  }
};
