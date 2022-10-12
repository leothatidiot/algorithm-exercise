#include "Solution.cpp"

int main() {
  vector<vector<int>> ts = {
    {1,3,5},
    {10,1,10,10,10},
    {2,2,2,0,1},
    {1,3,3},
    {1,1},
    {3,1,3},
  }; 
  Solution s1;
  
  for (auto t : ts) {
    cout << s1.minArray(t) << '\n';
  }
  return 0;
}