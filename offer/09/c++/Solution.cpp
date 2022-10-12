#include <stack>

class CQueue {
private:
  std::stack<int> iStack, oStack;
public:
    CQueue() {
      
    }
    
    void appendTail(int value) {
      if (oStack.empty() == false) {
        while( oStack.empty() == false) {
          iStack.push(oStack.top()); oStack.pop();
        }
        iStack.push(value);
      } else {
        iStack.push(value);
      }
    }
    
    int deleteHead() {
      if (iStack.empty() == false) {
        while (iStack.empty() == false) {
          oStack.push(iStack.top()); iStack.pop();
        }
        int res = oStack.top();
        oStack.pop();
        return res;
      } else {
        if (oStack.empty() == false) {
          int res = oStack.top();
          oStack.pop();
          return res;
        } else {
          return -1;
        }
      }
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */

// 未调试 一次过