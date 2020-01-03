#include <stdio.h>
#include <stdlib.h>

void printcb(char  chessb[8][8])
{

 for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            //grid[i][j] = '.';
            printf("%c ", chessb[i][j]);
        }
        printf("\n");
    }
    sleep(2);
}


void nqueen(char chessb[8][8])
{
 for (int i=0;i<8;i++)
     for( int j=0; j< 8;j++)
	{

	    if( chessb[i][j] == ' '){
            int p=0,q=0;
		    chessb[i][j] = 'q';
            for (int k=j+1; k < 8; k++) 
                chessb[i][k] = 'x';
            for (int h =i+1; h < 8; h++) 
                chessb[h][j] = 'x';
            p=i+1;
            q=j+1;
            while(p < 8 || q <8){
                chessb[p][q] = 'x';
                p++;q++;

            }
            printcb(chessb);
        }
        printf("\n");
    }
}


int main()
{
   char chessb[8][8] ={
    {' ',' ' , ' ' , ' ', ' ',' ', ' ', ' '},
    {' ',' ' , ' ' , ' ', ' ',' ', ' ', ' '},
    {' ',' ' , ' ' , ' ', ' ',' ', ' ', ' '},
    {' ',' ' , ' ' , ' ', ' ',' ', ' ', ' '},
    {' ',' ' , ' ' , ' ', ' ',' ', ' ', ' '},
    {' ',' ' , ' ' , ' ', ' ',' ', ' ', ' '},
    {' ',' ' , ' ' , ' ', ' ',' ', ' ', ' '},
    {' ',' ' , ' ' , ' ', ' ',' ', ' ', ' '},
};
   nqueen(chessb);
}

