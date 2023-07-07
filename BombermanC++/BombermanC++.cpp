// BombermanC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> bomberMan(int n, std::vector<std::string> grid) {
	int r = grid.size();
	int c = grid[0].size();
	int second = 2;

	if (n % 4 == 1)
	{
		n = 1;
	}

	if (n == 1 || n==0) {
		return grid;
	}

	if (n % 2 == 0)
	{
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				if (grid[i][j] == '.') {
					grid[i][j] = 'O';
				}
				else {
					grid[i][j] = 'O';
				}
			}
		}
		return grid;
	}

	if (n % 4 == 3)
	{	
		n = 3;
	}

	while (second <= n) {

		if (second % 2 == 0) {
			for (int i = 0; i < r; i++) {
				for (int j = 0; j < c; j++) {
					if (grid[i][j] == '.') {
						grid[i][j] = 'O';
					}
					else {
						grid[i][j] = 'X';
					}
				}
			}
		}
		if (second % 2 == 1) {
			for (int i = 0; i < r; i++) {
				for (int j = 0; j < c; j++) {
					if (grid[i][j] == 'X') {
						grid[i][j] = '.';
						if (i > 0 && grid[i - 1][j] == 'O') {
							grid[i - 1][j] = '.';
						}
						if (i < r-1 && grid[i + 1][j] == 'O') {
							grid[i + 1][j] = '.';
						}
						if (j > 0 && grid[i][j-1] == 'O') {
							grid[i][j - 1] = '.';
						}
		
						if (j < c-1 && grid[i][j + 1] == 'O') {
							grid[i][j + 1] = '.';
						}

					}
				}
			}
		}

		second++;
	}


	return grid;

}

// SEGUNDA SOLUCION 

std::vector<std::string> blast(std::vector<std::string> fullGrid, std::vector<std::string> grid) {
	for (int i = 0; i < grid.size(); i++) {
		for (int j = 0; j < grid[0].size(); j++) {
			if (grid[i][j] == 'O') {
				fullGrid[i][j] = '.';

				if (i > 0)
					fullGrid[i - 1][j] = '.';

				if (i < grid.size() - 1)
					fullGrid[i + 1][j] = '.';

				if (j > 0)
					fullGrid[i][j - 1] = '.';

				if (j < grid[0].size() - 1)
					fullGrid[i][j + 1] = '.';
			}
		}
	}
	return fullGrid;
}

std::vector<std::string> bomberMan1(int n, std::vector<std::string> grid) {

	if (n == 1)
		return grid;

	std::vector<std::string> fullGrid = grid;
	for (int i = 0; i < grid.size(); i++) {
		for (int j = 0; j < grid[0].size(); j++) {
			fullGrid[i][j] = 'O';
		}
	}


	if (n % 2 == 0)
		return fullGrid;


	grid = blast(fullGrid, grid);



	std::vector<std::string> grid2 = blast(fullGrid, grid);


	if (n % 4 == 1)
		return grid2;

	return grid;
}

int main() {
	int n = 181054341;
	int r = 6;
	int c = 7;
	std::vector<std::string> v
	{
		".......",
		"...O...",
		"....O..",
		".......",
		"OO.....",
		"OO....."
	};

	std::cout << 3 % 4 << std::endl;
	std::cout << 253764589 % 4 << std::endl;
	std::cout << (956116621) % 4 << std::endl;
	std::cout << (669782673) % 4 << std::endl;
	std::cout << (181054341) % 4 << std::endl;

	v = bomberMan1(n, v);


	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[0].size(); j++)
		{
			std::cout << v[i][j];
		}
		std::cout << std::endl;
	} 
}


