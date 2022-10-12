#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  // bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
  //   if (matrix.size() == 0 || matrix[0].size() == 0) return false;
  //   int rowLeft = 0, rowRight = matrix.size()-1;
  //   int colLeft = 0, colRight = matrix[0].size()-1;
  //   int rowMid, colMid;
  //   while (rowLeft!=rowRight || colLeft!=colRight) {
  //     rowMid = (rowLeft+rowRight)/2;
  //     colMid = (colLeft+colRight)/2;

  //     if (rowMid >= matrix.size()) rowMid--; // 边缘情况
  //     if (colMid >= matrix[0].size()) colMid--; // 边缘情况
  //     if (rowLeft >= matrix.size()) rowLeft--; // 边缘情况
  //     if (colLeft >= matrix[0].size()) colLeft--; // 边缘情况

  //     if (rowMid==0 && colMid == 0 && matrix[0][0]>target) return false; // 边缘情况
  //     if (rowMid==matrix.size()-1 && colMid==matrix[0].size()-1 && matrix[rowMid][colMid]<target) return false; // 边缘情况
      
  //     if (matrix[rowMid][colMid] > target) {
  //       rowRight = rowMid;
  //       colRight = colMid;
  //     } else if (matrix[rowMid][colMid] < target) {
  //         rowLeft = rowMid + 1;
  //         colLeft = colMid + 1;
  //         rowMid += 1; // 边缘情况
  //         colMid += 1; // 边缘情况
  //     } else { // 相等
  //       return true;
  //     }
  //   }
  //   for (int i = 0; i < rowMid; i++) {
  //     if (matrix[i][colMid] == target) return true;
  //   }
  //   for (int i = 0; i < colMid; i++) {
  //     if (matrix[rowMid][i] == target) return true;
  //   }
  //   return false;
  // }
  bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
    if(matrix.size()==0||matrix[0].size()==0) return false;
    int m = matrix.size(), n = matrix[0].size()-1;
    int row = 0, col = matrix[0].size()-1;
    while (row < m && col >= 0) {
      if (matrix[row][col] == target) {
        return true;
      }
      else if (matrix[row][col] > target) {
        col--;
      } else if (matrix[row][col] < target) {
        row++;
      }
    }
    return false;
  }
};