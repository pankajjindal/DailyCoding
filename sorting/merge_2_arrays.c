/*
 * Complete the merger_first_into_second function below.
 */

/*
 * Please store the size of the integer array to be returned in result_count pointer. For example,
 * int a[3] = {1, 2, 3};
 *
 * *result_count = 3;
 *
 * return a;
 *
 */
 void insertUp(int *arr, int i)
 {
     arr[0]=0;
 }
 int deleteMin(int *arr, int size)
 {
     //spits out the minimum of min-head
     int outmin = arr[0];
     for( int i =0 ;i< size;i++)
         insertUp(arr, size-i);
     return outmin;
 }
 
 void insert_heap(int *arr , int size ,int value){
     
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
 
int* merger_first_into_second(int arr1_count, int* arr1, int arr2_count, int* arr2, int* result_count) {
    /*
     * Write your code here.
     */
     int j =0;
     for(int i =0 ;i< arr2_count ;i++)
         insert_heap(arr2, arr2_count/2 ,arr1[i]);
         
      while(arr2[j] != '\0')
      {
          printf("%d  \n" ,deleteMin(arr2, j));
          j++;
      }
      
     
    

}

