#include <stdio.h>
#include <iostream>



#define ROW 2
#define COL 2

int table[ROW][COL];

int grid[ROW][COL] = {{2,3},
						  {4,11}};

int max_path_recursion( int row, int col)
{

	if ((row >= ROW) || (col >= COL))
		return 0;

	if ((row == ROW-1) && (col == COL-1))
		return grid[row][col];

	return (grid[row][col] + std::max(max_path_recursion( row +1 , col ) ,max_path_recursion( row , col + 1 )));

}


int main(){
	
	std::cout << max_path_recursion( 0, 0 ) << std::endl;

	return 0;

}
