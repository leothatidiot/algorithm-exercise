package main

import (
	"fmt"
)

var MAPSIZE int = 5

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

type GameOfLife struct {
	gameMap [][]int
}

func (g *GameOfLife) setMap(m [][]int) {
	g.gameMap = m
}

func (g *GameOfLife) display() {
	for i := 0; i < MAPSIZE; i++ {
		for j := 0; j < MAPSIZE; j++ {
			if g.gameMap[i][j] == 1 {
				fmt.Print("# ")
			} else {
				fmt.Print(". ")
			}
		}
		fmt.Print("\n")
	}
}

func (g *GameOfLife) update() {
	for i := 0; i < MAPSIZE; i++ {
		for j := 0; j < MAPSIZE; j++ {
			var lives int = 0
			for y := max(i-1, 0); y <= min(i+1, MAPSIZE-1); y++ {
				for x := max(j-1, 0); x <= min(j+1, MAPSIZE-1); x++ {
					lives += g.gameMap[y][x] & 1
				}
			}
			if lives == 3 || lives-g.gameMap[i][j] == 3 {
				g.gameMap[i][j] |= 0b10
			} else {
				// 自动
			}
		}
	}
	for i := 0; i < MAPSIZE; i++ {
		for j := 0; j < MAPSIZE; j++ {
			g.gameMap[i][j] >>= 1
		}
	}
}

func main() {
	g1 := new(GameOfLife)
	m := [][]int{
		{0, 0, 1, 0, 0},
		{1, 0, 1, 0, 0},
		{0, 1, 1, 0, 0},
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0},
	}
	g1.setMap(m)
	g1.display()
	fmt.Println("")
	g1.update()
	g1.display()
}
