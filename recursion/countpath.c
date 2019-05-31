#include<stdio.h>


void countPathMain(int array[][])
{
    countPath( array, 0, 0);
}

int countPath(int **array, int row, int column)
{
    if (row > 3 )
        return;
    if (column > 3)	
        return;
    countPath(array, row+1, column);
    countPath(array, row, column+1);
}

int main()
{
   int array[3][3] = {{'q','q','q',}
                    {'q','q','q',}
                    {'q','q','q'}};
   countPathMain(array);
}

