#include<stdio.h>

void swap(char * a, char *b)
{
	char temp = *a;
        *a = *b;
        *b = temp;
}


void permute( char * array, int i, int c_size)
{
	if( i == c_size-1){
             printf( "%s \n" , array);
             return;
	}

	for( int j=i ; j<=c_size-1 ; j++)
	{	
		swap(&array[j],&array[i]);
		permute(array, i+1, c_size);
		//swap(&array[i],&array[j]);
	}

}


main()
{
	char array4[3]="abc";
        //char array5[5]="abcde";
        //char array6[6]="abcdef";

	permute(array4,0,3);
	//permute(array5,0,5);
	//permute(array6,0,6);
        
}
