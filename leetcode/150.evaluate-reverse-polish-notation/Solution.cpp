#include <vector>
#include <string>
#include <stack>
#include <iostream>

class Solution {
public:
  std::stack<int> s;
  int evalRPN(std::vector<std::string>& tokens) {
    for(auto item : tokens) {
      if(item == "+" || item == "-" || item == "*" || item == "/") { // item 是符号
        auto o2 = s.top();
        s.pop();
        auto o1 = s.top();
        s.pop();
        if(item == "+") {
          s.push(o1+o2);
        }
        else if (item == "-") {
          s.push(o1-o2);
        }
        else if (item == "*") {
          s.push(o1*o2);
        }
        else if (item == "/") {
          s.push(o1/o2);
        }
      } else { // item 是数字
        s.push(stoi(item));
      }
    }
    // std::cout << s.top() << std::endl;
    return s.top();
  }
};