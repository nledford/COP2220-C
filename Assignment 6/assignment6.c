#include <stdio.h>
#define SIZE 5

int main(int argc, char *argv[]) {
	
	int n[SIZE]; 	//Set up array uninitialized
	int i, j; 		//Variables associated with original loop
	int p = 0;		//Variable used with while loop for user-inputted numbers
	char c[0];		//Set up variable for user-inputted character
	
	//Welcome the user to the program and explain its purpose
	printf("Welcome.  This program will allow you to enter five numbers and display a histogram.\n");
	
	//Prompt user to input numbers
	printf("\nPlease enter five numbers:\n");
	
	/* A while loop is used to gather user input
	 * As long as the user has entered less than five numbers,
	 * the loop will continue.  The variable p is used to track
	 * how many numbers have been entered.
	 */
	while (p < SIZE){
		scanf("%d", &n[p]);
		p++;
	}
	
	//Prompt user to input a character
	printf("\nPlease enter a character:\n");
	scanf("%s", c);
	
	printf("%s%13s%17s\n", "Element", "Value","Histogram");
	
	/* For loops are mostly unchanged from original program.
	 * The first loop prints the element and value from the array.
	 * The second loop prints the histogram bar.  In the second loop,
	 * the character to be printed has changed from the hard-coded default
	 * to whatever the user inputted value is.
	 */
	for ( i = 0; i < SIZE; i++ ){
		printf("%7d%13d        ", i, n[i]);
		
		for(j = 1; j <= n[i]; j++){
			printf("%s", c);
		}
		
		printf("\n");
	}
	
	return 0;
}