#pragma once

#include "./tile.h"
#include "./maze_gen_algorithms.h"

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>


typedef struct {
	long unsigned int x_coord;
	long unsigned int y_coord;
} Coordinates;

class Grid {

	public:
		Grid(int rows, int columns);
		void CreateGrid();
		void ClearGrid();
		void ClearPath();
		void RefreshGrid(sf::RenderWindow& window);
		Coordinates getMousePos(sf::Vector2i mouse_pos);
		void TilePressed(Coordinates);
		void getTileNeighbors(Coordinates);
		void MazeAlgorithms(const int algo_index);

	private:
		int rows_;
		int columns_;
		std::vector<Tile*> grid_;	
		MazeGenerationAlgorithm* maze_gen_ptr_;
};


