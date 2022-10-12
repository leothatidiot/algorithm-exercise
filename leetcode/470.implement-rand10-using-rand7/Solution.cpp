// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

#include <iostream>
#include <random>

int rand7() {
    // https://docs.microsoft.com/en-us/cpp/standard-library/random?view=msvc-160
    std::random_device rd;
    std::mt19937 gen(rd());
    return gen() % 7 + 1;
}

class Solution {
public:
    int rand10() {
        // return (rand7() % 5 + 1) + (rand7() % 5 + 1);
        // 两个0-5的随机数相加 等于0时不要
        // auto res = (rand7() % 6) + (rand7() % 6);
        // if(res == 0) {
        //     rand10();
        // }
        // return res;
        auto n = 7*(rand7()-1) + (rand7()-1);
        if(n >= 40) {
            return rand10();
        }
        return n % 10 + 1;
    }
};