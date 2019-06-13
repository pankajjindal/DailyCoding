#include <stdio.h>
#include <iostream>



#define ROW 2
#define COL 2

int table[ROW][COL];

int max_path_recursion( int grid[][COL], int row, int col)
{

	if ((row >= ROW) || (col >= COL))
		return 0;

	return (grid[row][col] + std::max(max_path_recursion( &grid[COL], row +1 , col ) ,max_path_recursion( &grid[COL], row , col + 1 )));

}


int main(){
	int grid[ROW][COL] = {{2,3},
						  {4,11}};
	std::cout << max_path_recursion(&grid[COL] , 0, 0 ) << std::endl;

	return 0;

}
