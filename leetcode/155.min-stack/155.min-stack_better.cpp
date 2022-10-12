#include <iostream>

using namespace std;

class MinStack {
private:
    struct node {
        // node 的生成函数
        node(int v, int m) : val(v), min(m), next(nullptr) {
            ;
        }

        int val;
        int min; // 记录该点及以前所有栈的最小值
        node* next;
    };
    node* head;
public:
    MinStack() {
        head = nullptr;
    }

    void push(int x) {
        if(head == nullptr)
            head = new node(x, x);
        else {
            int smaller = (x < head->min) ? x : head->min;
            node* cur = new node(x, smaller);
            cur->next = head;
            head = cur;
        }
    }

    void pop() {
        head = head->next;
    }

    int top() {
        return head->val;
    }

    int getMin() {
        return head->min;
    }
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
