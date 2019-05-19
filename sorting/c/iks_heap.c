  #include <stdio.h>

void swap(int *a , int *b)
{
	int temp = *a;
        *a = *b;
        *b = temp;
        
}

void print_array(int *array, int n)
{
	for( int i=0; i<n;i++)
           printf(" %d ", array[i]);
        printf("\n");
}

void insert( int * arr, int size ,int value ){
     
	int length=1;
        int index = size +1;	

        while( arr[length]!='\0')
        	length++;

        printf ( " index = %d, length =%d \n", index, length); 
	if (index < length){
	    arr[index]= value;
            printf( " %d %d %d \n" , ((index-1)/2),  arr[index] ,arr[index/2]);
            while( ((index-1)/2) > 0 && arr[index] < arr[index/2]){
	       print_array(arr,11);
               swap(&arr[index], &arr[index/2]);
               printf( " swap %d, %d \n", index , index/2);
               index = index/2;
	       print_array(arr,11);
	    }  
	
	}
}

void main()
{
	int array[11]= {1,100,322,234,134,635,5635,23,45,6,7};

	swap(&array[0],&array[1]);

	print_array(array,10);

	for( int i=1; i<=11;i++)
           insert(array, i-1,array[i]);
        	
	//print_array(array,10);

}
