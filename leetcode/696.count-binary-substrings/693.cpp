// 693.交替位二进制数

#include <iostream>

using namespace std;

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int b;
        b = n & 1;
        
        while(n != 0) {
            n >>= 1;
            if((n&1) == b){
                cout << "False";
                return false;
            }
            b = n&1;
        }
        cout << "True";
        return true;
    }
};

int main() {
    Solution s;
    int num;
    cin >> num;
    s.hasAlternatingBits(num);

}

// -----------------
/*
那些神仙想出来的方法：
只用判断某一位与前一位是否不同

10101010 右移得
01010101
*/

bool hasAlternatingBits(int n) {
    int temp = n ^ (n >> 1);
    return (temp&(temp+1)) == 0
}
