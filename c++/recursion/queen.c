#include<stdio.h>

MainfindQueen(char ** array)
{
}

findqueen(char** array, int i , int j)
{
    if ( array[m][n] == 'q')
        return false;
    
    if ( m < 0 || m >= length)
    return true;
    if ( n< 0 || n >= width)
    return true;

    findqueen(array, m+1, n);
    findqueen(array, m, n+1);

    findqueen(array, m+1, n+1);
    findqueen(array, m-1, n);
    findqueen(array, m-1, n-1);

}

int main(){





}
