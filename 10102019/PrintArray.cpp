#include <iostream>
#include <stdio.h>

int FindTheLength(char *arr)
{
	int count =0;
	while(arr[count]!='\0'){
    count++;
	}
	return count+1;
}
void printArray(char * arr)
{
	int Length = FindTheLength(arr);
	for ( int i =0 ;i< Length ;i++)
		printf ( "%c",arr[i]);

	printf("\n");
	
}

void swap( char * array, int i , int j)
{
	char temp = array[i];
	array[i]=array[j];
	array[j]=temp;

}


void PermuteArray( char * arr, int i)
{
	int n = 3;//size of array
    printArray( arr);
	for (int j =i;j<n;j++)
	{
		swap(arr,j,i);
		PermuteArray(arr,i+1);
		swap(arr,i,j);
	}
}

int main()
{
	char test[3]={'b','a','t'};

	PermuteArray(test,0);

	return 0;
}