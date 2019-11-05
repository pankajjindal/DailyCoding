#include <iostream>
#include <stdio.h>

//#include <>


class Permute{

	public:

		int FindTheLength(char *arr) const
		{
			int count =0;
			while(arr[count++]!='\0'){
				//printf("%c \n", arr[count]);
			}
			printf(" count is %d\n", count);
			return count-1;
		}

		void printArray(char * arr) const
		{
			//int Length = FindTheLength(arr);
			for ( int i =0 ;i< 3 ;i++)
				printf ( "%c",arr[i]);

			printf("\n");

		}

		void swap( char * array, int i , int j) const
		{
			char temp = array[i];
			array[i]=array[j];
			array[j]=temp;

		}

		void PermuteArray( char * arr, int i) const
		{
			const int n = 3;//size of array
			printArray( arr);
			for (int j =i;j<n;j++)
			{
				swap(arr,j,i);
				PermuteArray(arr,i+1);
				swap(arr,i,j);
			}
		}

};

int main()
{
	Permute *per = new Permute();

	char test[3]={'b','a','t'};

	per->PermuteArray(test,0);

	return 0;
}
