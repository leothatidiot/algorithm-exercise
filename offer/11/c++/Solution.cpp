#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minArray(vector<int>& numbers) {
    if (numbers.size() == 1) return numbers[0];
    int left = 0, right = numbers.size()-1;
    int mid;
    while (left < right) {
      mid = (left+right)/2;
      if (numbers[mid] > numbers[right]) {
        left = mid+1;
      } else if (numbers[mid] < numbers[right]) {
        right = mid;
      } else {
        right--;
      }
    }
    // return (numbers[mid] <= numbers[right]) ? numbers[0] : numbers[right];
    // return min(numbers[left], numbers[right]);
    return numbers[left];
  }
};