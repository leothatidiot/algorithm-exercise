#include "Solution.cpp"
#include <unistd.h>

int main() {
    Solution s1 = Solution();

    for(int i=0; i<100000; i++) {
        // std::cout << rand7() << ' ';
        std::cout << s1.rand10() << ',';
    }
    
    std::cout << std::endl;
}