#include <stdio.h>

int main(int argc, char *argv[]) {
	
	//Declare variables with values
	//These will be assigned to pointer variables
	int number 			= 3;
	float pi 			= 3.14;
	char initial[1] 	= "n";
	
	//Assign original variables' values to pointer variables
	int *intPointer 		= &number;
	float *floatPointer 	= &pi;
	char *charPointer 		= &initial[0];
	
	//Display output containing value and address of each pointer variable
	printf("The value of number variable is: %d\n", *intPointer);
	printf("The address of number variable is: %p\n", intPointer);
	
	printf("\nThe value of float variable is: %f\n", *floatPointer);
	printf("The address of float variable is: %p\n", floatPointer);
		
	printf("\nThe value of char variable is: %c\n", *charPointer);
	printf("The address of char variable is: %p", charPointer);
	
	return 0;
}