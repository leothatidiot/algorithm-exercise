// 155.min-stack.cpp

#include <iostream>

using namespace std;

class MinStack {
public:
    MinStack() {
        for(int i=0; i<128; i++) {
            stack[i] = NULL;
        }
        top_pos = 0;
    }

    void push(int x) {
        stack[top_pos] = x;
        top_pos += 1;
    }

    void pop() {
        stack[top_pos] = NULL;
        top_pos -= 1;
    }

    int top() {
        return stack[top_pos-1];
    }

    int getMin() {
        int min = stack[0];
        for(int i=1; stack[i]!=NULL; i++) {
            if (stack[i] < min) {
                min = stack[i];
            }
            return min;
        }
    }
private:
    int stack[128];
    int top_pos;
};

int main() {
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout << minStack.getMin() << endl;
    minStack.pop();
    cout << minStack.top() << endl;
    cout << minStack.getMin() << endl;
}
