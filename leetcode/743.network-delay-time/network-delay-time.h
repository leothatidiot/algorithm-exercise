#include <vector>
using namespace std;

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k);
    void dfs2(int sour, vector<vector<int>> netMap, vector<int>& disList);
};

// int Solution::networkDelayTime(vector<vector<int>>& times, int n, int k);
// int Solution::dfs2(int sour, vector<vector<int>> netMap, vector<int>& disList);
