#include <stdio.h>

int fibonacci( int n )
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else 
		return ((n-1)+(n-2));

}

int main()
{
     printf ( " %d \n",fibonacci(5));
}