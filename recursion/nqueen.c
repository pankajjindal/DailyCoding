#include <stdio.h>

void printcb(char  chessb[8][8])
{

 for (int i=0;i<8;i++){
     for( int j=0; j< 8;j++)
	{
	 printf( "%c" , chessb[i][j]);
	}
        //printf( " \n");
	}
}



void markx( char chessb[8][8] , int i , int j)
{
	
        if ( i >7 || j > 7)
	 return;
	
	chessb[i][j]='x';
        
	markx( chessb , i ,j+1);
	markx( chessb , i+1 ,j);
        markx( chessb , i+1 ,j+1);
        
        printcb(chessb);
        
}

void nqueen(char chessb[8][8])
{
 for (int i=0;i<8;i++)
     for( int j=0; j< 8;j++)
	{

        printcb(chessb);
	    if( chessb[i][j] == ' '){
		chessb[i][j] = 'q';
                markx( chessb , i ,j+1);
	    }
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

