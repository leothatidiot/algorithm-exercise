#include <string>
#include <vector>

#include "Solution.cpp"

using std::vector, std::string;

int main() {
  Solution s1;
  
  // vector<vector<char>> board1 = {
  //     {'A','B','C','E'},
  //     {'S','F','C','S'},
  //     {'A','D','E','E'}
  // };

  // s1.exist(board1, "ABCCED");
  
  // vector<vector<char>> board2 = {
  //     {'A','B','C','E'},
  //     {'S','F','C','S'},
  //     {'A','D','C','W'}
  // };

  // auto res = s1.exist(board2, "ABCCCE");

  vector<vector<char>> board3 = {{'A'}};
  string s3 = "A";
  auto res = s1.exist(board3, s3);
  return 0;
}
