#include<stdio.h>

void swap(char * a, char *b)
{
	char temp = *a;
        *a = *b;
        *b = temp;
}

void check_target( char * array, char *symbol, int target){
	char accu=array[0],i=0;

	printf( "%s \n" , array);
	printf( "%d array 0\n" , accu);

	printf( "%s \n" , symbol);

	while ( symbol[i] != '\0')
	{
		if (symbol[i]=='*')
			accu = accu * array[i+1];
		else if (symbol[i]=='+')
			accu = accu + array[i+1];
		else if (symbol[i]=='&')
			accu = (accu *10) + array[i+1];

		i++;
		printf(" accu = %d , %d\n", accu, i);
	}

	if (target == accu )
      printf(" target matched for %d \n", accu);
}


void permute( char * num, char * symbol, int i, int c_size, int target)
{
	if( i == c_size-1)
             check_target(num, symbol, target);
		//printf( "%s \n" , symbol);

	for( int j=i ; j<=c_size-1 ; j++)
	{	
		swap(&symbol[j],&symbol[i]);
		permute(num, symbol, i+1, c_size, target);
		swap(&symbol[i],&symbol[j]);
	}

}



main()
{
	char symbol[3]="*&+";
	char array4[4]="1234";


	permute(array4,symbol,0,3,64);
	
        
}
