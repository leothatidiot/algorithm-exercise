#include "Solution.cpp"

int main() {
  Solution s1;
  vector<pair<vector<vector<int>>,int>> t = {
    {
      {
        { 1, 2, 3, 4, 5},
        { 6, 7, 8, 9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
      },15
    },
    {
      {{1,3,5}},
      6
    },
    {
      {
        {1,4},
        {2,5}
      }, 2
    },
    {
      {
        { 1, 4, 7,11,15},
        { 2, 5, 8,12,19},
        { 3, 6, 9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
      }, 5
    },
    {
      {{1,1}},
      5
    },
    {
      {{1,3,5}},
      4
    },
    {
      {{-1, 3}},
      1
    },
    {
      {{}},
      1
    },
    {
      {},
      0
    }
  };
  
  for (auto testCase : t) {
    cout << s1.findNumberIn2DArray(testCase.first, testCase.second);
  }
  // vector<vector<int>> v3 = {{1,1}};
  // bool b = s1.findNumberIn2DArray(v3, 5);
  return 0;
}