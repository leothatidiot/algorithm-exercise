#include <iostream>
#include "Solution.cpp"

int main() {
    std::vector<int> w = {3,14,1,7};
    Solution s1(w);
    s1.displaySw();
    for(int i=0; i<1000; i++) {
        std::cout << s1.pickIndex() << ',';
    }
    // s1.displaySw();
    std::cout << '\n';

    return 0;
}