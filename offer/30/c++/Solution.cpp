#include <bits/stdc++.h>

class MinStack {
private:
  std::stack<std::pair<int, int>> s;
public:
  /** initialize your data structure here. */
  MinStack() {

  }
  
  void push(int x) {
    int curMin;
    if (s.empty() == false) {
      curMin = (x < s.top().second) ? x : s.top().second;
    } else {
      curMin = x;
    }
    s.push({x, curMin});
  }
  
  void pop() {
    s.pop();
  }
  
  int top() {
    return s.top().first;
  }
  
  int min() {
    return s.top().second;
  }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */

// 无调试 一次过