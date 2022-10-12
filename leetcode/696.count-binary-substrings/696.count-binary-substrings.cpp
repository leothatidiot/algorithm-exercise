#include <iostream>

using namespace std;

class Solution {
public:
    int countBinarySubstrings(string s) {
        int cnt=0, prev_cnt=0, res=0, small;
        for(int i=0; i<=s.size(); i++) {
            if(i==0 || s[i]==s[i-1]) {
                cnt++;
            }
            else {
                if(prev_cnt == 0) {
                    prev_cnt = cnt;
                    cnt = 1;
                    continue;
                }

                // small = cnt < prev_cnt ? cnt : prev_cnt;
                small = min(cnt, prev_cnt);
                res += small;

                prev_cnt = cnt;
                cnt = 1;
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    cout << sol.countBinarySubstrings("00100");
    return 0;
}
