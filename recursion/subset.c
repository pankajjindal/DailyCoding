#include <stdio.h>
#include <stdlib.h>

#define DEBUG 0

void printSubsets(char array[], int i, char output[], int j );

void printSet(char array[],int size){
    int i;
    printf ( " {");
    for (i=0;i<=size;i++)
        printf ( " %c " ,array[i]);

    printf ( " }");
    //printf("\n");
    return;
}

void printMain(char array[]){

	int i =0;
    //char * output;
    if( array == NULL)
    	return;
	while(array[i]!='\0')
		i++;

	#ifdef DEBUG
	printf(" array allocated to be printed %d\n", i);
	#endif

	char * output = malloc(i);
	printSubsets(array, 0, output, 0);
	return;
}

void printSubsets(char array[], int i, char output[], int j ){
	int length=0;

	while(array[length]!='\0')
		length++;

    #ifdef DEBUG
	printf(" array allocated to be subsetted %d\n", length);
	printf(" array allocated to be output %d\n", sizeof(output));
    #endif

	if ( i==length){
		printSet(output, j);
		return;
	}

	printSubsets(array,i+1,output,j);
	output[j]=array[i];
	printSubsets(array,i+1,output,j+1);

}

int main(){
	char array[2] = "xy";
	printMain(array);
	return 0;
}