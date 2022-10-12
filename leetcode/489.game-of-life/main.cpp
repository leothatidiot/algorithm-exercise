#include <iostream>
#include <stdlib.h>

#define MAPSIZE 5

class GameOfLife {
private:
  int map[MAPSIZE][MAPSIZE] = {
    {0,0,1,0,0},
    {1,0,1,0,0},
    {0,1,1,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
  };
  int nextMap[MAPSIZE][MAPSIZE] = {0};
public:
  void display() {
    for(int i=0; i<MAPSIZE; i++) {
      for(int j=0; j<MAPSIZE; j++) {
        if(map[i][j] == 1)
          std::cout << '#' << ' ';
        else
          std::cout << '.' << ' ';
      }
      std::cout << '\n';
    }
  }

  void update() {
    for(int i=0; i<MAPSIZE; i++) {
      for(int j=0; j<MAPSIZE; j++) {
        // 每个状态
        int lives = 0;
        for(int y=__max(i-1, 0); y<=__min(i+1, MAPSIZE-1); y++) {
          for(int x=__max(j-1, 0); x<=__min(j+1, MAPSIZE-1); x++) {
            lives += map[y][x]; // 存活个数 包括自己在内的共9格
          }
        }
        if(lives == 3 || lives-map[i][j] == 3) {
          nextMap[i][j] = 1;
        } else {
          nextMap[i][j] = 0;
        }
      }
    }
  }

  void displayNext() {
    for(int i=0; i<MAPSIZE; i++) {
      for(int j=0; j<MAPSIZE; j++) {
        if(nextMap[i][j] == 1)
          std::cout << '#' << ' ';
        else
          std::cout << '.' << ' ';
      }
      std::cout << '\n';
    }
  }
};

int main() {
  auto p_game1 = new GameOfLife;
  p_game1->display();
  p_game1->update();
  p_game1->displayNext();
  return 0;
}
