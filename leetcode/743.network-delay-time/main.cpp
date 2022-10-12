#include "network-delay-time.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> v1{{2,1,1},{2,3,1},{3,4,1}};
    Solution s1 = Solution();
    cout << s1.networkDelayTime(v1, 4, 2) << '\n';

    vector<vector<int>> v2{{1,2,1}};
    Solution s2 = Solution();
    cout << s2.networkDelayTime(v2, 2, 1) << '\n';

    vector<vector<int>> v3{{1,2,1}};
    Solution s3 = Solution();
    cout << s3.networkDelayTime(v3, 2, 2) << '\n';
}