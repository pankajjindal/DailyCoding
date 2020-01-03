
/*
 * Complete the function below.
 */
 
 bool checkSum(long long int array[],int size, long long int target){
    int i,sum=0;
    for (i=0;i<=size;i++)
        sum=+array[i];
        
   if (sum == target)
      return true;

   return false;
}
bool check_if_sum_possible(int arr_size, long long int* arr, long long int k) {
    
    long long int * output = malloc(arr_size);
	if(true == getSubsetSum(arr, 0, output, 0, k, arr_size))
	   return true;
	else
	   return false;
}

bool getSubsetSum(long long int* array, int i, long long int* output, int j, long long int target, int length){
    if ( i==length-1){
		if (checkSum(output, j, target) == true)
		  return true;
	}
    getSubsetSum(array,i+1,output,j, target, length);
	output[j]=array[i];
	getSubsetSum(array,i+1,output,j+1, target, length);
	
}
