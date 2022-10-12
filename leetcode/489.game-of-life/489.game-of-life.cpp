#include <vector>

using namespace std;

class Solution {
public:
  void gameOfLife(vector<vector<int>>& board) {
    int rowCnt = board.size();
    int rowSize = rowCnt? board[0].size() : 0;
    for(int i=0; i<rowCnt; i++) {
      for(int j=0; j<rowSize; j++) {
        // 每个状态
        int lives = 0;
        for(int y=max(i-1, 0); y<=min(i+1, rowCnt-1); y++) {
          for(int x=max(j-1, 0); x<=min(j+1, rowSize-1); x++) {
            lives += board[y][x] & 1; // 存活个数 包括自己在内的共9格
          }
        }
        if(lives == 3 || lives-board[i][j] == 3) {
          board[i][j] |= 0b10;
        }
      }
    }
    for(int i=0; i<rowCnt; i++) {
      for(int j=0; j<rowSize; j++) {
        board[i][j] >>= 1;
      }
    }
  }
};