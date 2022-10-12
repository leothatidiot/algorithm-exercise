#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<int>> netMap(n+1, vector<int>(n+1, INT_MAX)); //地图矩阵 最大距离100 101表示不可达
        for(auto road : times) { // 用输入信息更新地图
            netMap[road[0]][road[1]] = road[2];
        }
        // 打印 netMap
        // for(int i=1; i<n+1; i++) {
        //     for(int j=1; j<n+1; j++) {
        //         cout  << netMap[i][j] << ' ';
        //     }
        //     cout << '\n';
        // }

        vector<int> disList(n+1, INT_MAX); // 从 k 出发到每个点的需要的时间（距离）
        disList[k] = 0;
        // dfs2(k, netMap, disList);

        // 原
        // int maxDis = INT_MIN;
        // for(int i=1; i<=n; i++) {
        //     if(disList[i] == INT_MAX) return -1;
        //     maxDis = (disList[i] > maxDis) ? disList[i] : maxDis;
        // }
        // return maxDis;

        // for(int i=0; i<n; i++) { // 循环 n 次
        //     int sour = -1, dis = INT_MAX;
        //     for(int p=1; p<=n; p++) { // p点 从1~n 设定起点为p
        //         if(disList[p] != INT_MAX) {
        //             sour = p;
        //             dis = disList[p]
        //         }
        //     }
        //     if(sour == -1) break;
        //     for(int dest=1; dest<=n; dest++) { // dest 终点 从1~n
        //         // if(netMap[sour][dest] != INT_MAX)
        //         auto e = (netMap[sour][dest] != INT_MAX) ? netMap[sour][dest]+disList[sour] : INT_MAX; // 一条边的长度 e

        //     }
        // }

        for(int i=0; i<n; i++) {
            for(int sour=1; sour<=n; sour++) {
                if(disList[sour]==INT_MAX) continue;
                for(int dest=1; dest<=n; dest++) {
                    auto tempDis = (netMap[sour][dest] != INT_MAX) ? 
                        netMap[sour][dest]+disList[sour] : INT_MAX;
                    if(tempDis < disList[dest]) {
                        disList[dest] = tempDis;
                    }
                }
            }
        }

        int res = *max_element(disList.begin()+1, disList.end());
        return (res == INT_MAX) ? -1 : res;

        

        // 打印距离列表
        // for(int i=1; i<=n; i++) {
        //     cout << disList[i] << ' ';
        // }
        // return 2;
    }

    void dfs2(int sour, vector<vector<int>> netMap, vector<int>& disList) {
        // 深度优先的迪杰斯特拉 更新disList
        for(int dest=1; dest<netMap.size(); dest++) {
            auto tempDis = (netMap[sour][dest] != INT_MAX) ? netMap[sour][dest]+disList[sour] : INT_MAX;
            // cout << tempDis << ' ';
            if(tempDis < disList[dest]) {
                disList[dest] = tempDis;
                // cout << sour << '>' << dest << ' ';
                dfs2(dest, netMap, disList);
            }
        }
    }
};

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