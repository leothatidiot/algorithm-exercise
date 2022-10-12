#include <string>
#include <vector>

using std::vector, std::string;

bool dfs(vector<vector<char>>& board, string word, std::pair<int, int> cur,
         vector<vector<bool>>& flags) {
  // 走完
  if (word == "") {
    return true;
  }
  // 超出边界
  if (cur.first == -1 || cur.second == -1 ||
      cur.first == board.size() || 
      cur.second == board[0].size()) {
    return false;
  }
  // 已经走过
  if (flags[cur.first][cur.second] == true) {
    return false;
  }
  // 对比出错
  if (board[cur.first][cur.second] != word[0])  {
    flags[cur.first][cur.second] = false;
    return false;
  }
  // 上下左右 递归
  word.erase(0,1);
  flags[cur.first][cur.second] = true;
  if (dfs(board, word, {cur.first + 1, cur.second}, flags) ||
      dfs(board, word, {cur.first - 1, cur.second}, flags) ||
      dfs(board, word, {cur.first, cur.second + 1}, flags) ||
      dfs(board, word, {cur.first, cur.second - 1}, flags) == true) {
    return true;
  }
  flags[cur.first][cur.second] = false;
  return false;
}

class Solution {
 public:
  bool exist(vector<vector<char>>& board, string word) {
    vector<vector<bool>> flags(board.size(),
                               vector<bool>(board[0].size(), false));
    for(int row = 0; row < board.size(); row++) {
      for (int col = 0; col < board[0].size(); col++) {
        if (dfs(board, word, {row, col}, flags) == true) return true;
      }
    }
    return false;
  }
};