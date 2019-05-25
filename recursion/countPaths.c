#include<stdio.h>

#define len 4

int countPath(int **grid , int r , int c, int totalRow ,int totalCol );

int MainCountPath(int **grid, int totalRow, int totalCol)
{
	return countPath(grid , 0 ,0, totalRow, totalCol);
}

int countPath(int **grid , int r , int c, int totalRow ,int totalCol )
{

	if (r>=totalRow-1 || c >=totalCol-1)
		return 1;
	printf ( " %d , %d\n", r ,c);

	return (countPath( grid, r+1, c, totalRow, totalCol) + countPath(grid , r, c+1, totalRow, totalCol));
	
}

int main()
{
	int grid[len][len] ;

	for(int i=0;i<len;i++)
        {
            for(int j=0;j<len;j++)
            {
	           //printf("element - [%d],[%d] : ",i,j);
	           grid[i][j] = i+j;
            }
        }  

        printf ( " The paths are %d \n" , MainCountPath(grid, len,len));
}

