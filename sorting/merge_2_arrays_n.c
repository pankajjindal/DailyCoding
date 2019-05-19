int* merger_first_into_second(int arr1_count, int* arr1, int arr2_count, int* arr2, int* result_count) {
    /*
     * Write your code here.
     */
     int j=arr1_count-1;
     int k=arr2_count;
     for(int i = arr2_count/2; i>=0;)
     {
         if (arr1[j] > arr2[i])
         {
             arr1[k]=arr1[j]
             k--;
             j--;
         }
         else
         {
             arr1[k]=arr1[i]
             k--;
             i--;
         }
         
     }
     // add the remaining variables.

}
