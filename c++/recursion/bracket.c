#include<stdio.h>


void addtoString( char * str, char r)
{
	static int i = 0;

    str[i]=r;

}

void bracketMain( int n)
{
	char * str = malloc ( 2*n);
	bracket( str ,n, 0, 0)

}

void brackets( char * str, int n , int open , int close, )
{

	if(open + close == 2*n)
		print( "%s" , str);

	if (open < n)
	    brackets (addtoString(str, '('), open+1, close, );

	if(open > close)
	    brackets(addtoString(str, ')'), open , close+1, );

}


int main()
{

	bracketMain(3);

}