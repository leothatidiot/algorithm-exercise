#include <iostream>

class Stack {
private:
  int data[64] = {0};
  int pos = 0;
public:
  void push(int n) {
    data[pos] = n;
    pos++;
  }
  int pop() {
    return data[--pos];
  }
};

int main() {
  Stack s1 = Stack();
  char c = 'N';
  while((c=getchar()) != '#') {
    if( c-'0'>=0 && c-'0'<=9 ) {
      s1.push(c-'0');
    } else if(c == '+' || c == '-' || c == '*' || c == '/') {
      auto temp2 = s1.pop();
      auto temp1 = s1.pop();
      switch (c) {
      case '+':
        s1.push(temp1 + temp2);
        break;
      case '-':
        s1.push(temp1 - temp2);
        break;
      case '*':
        s1.push(temp1 * temp2);
        break;
      case '/':
        s1.push(temp1 / temp2);
        break;
      }
    }
  }
  std::cout << s1.pop();
  return 0;
}
