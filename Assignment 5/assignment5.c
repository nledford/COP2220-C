#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/* Declare variables to hold the value of
	 * user-inputted number (num) and the result of
	 * the number after it has been factored (fn).
	 */
	int num, fn;
	
	printf("Welcome.  This program will computer the factor of a number via recursion.\n");
	printf("Please enter a number for factorial calculation: ");
	scanf("%d", &num);
	
	//Call the recursive function
	int recursion(int);
	
	//Store result of recursion function in variable
	fn = recursion(num);
	
	//Display result to user
	printf("The factorial of %d is: %d", num, fn);
	return 0;
}


int recursion(int n){
	
	/* Set up factorial function
	 * The function first checks if the user has entered a value
	 * equal to one.  If so, simply return a value of one.  Else,
	 * execute the function until the number is reduced to one.
	 */ 
	
	if ( n == 1){
		return 1;
	} else {
		return n * recursion(n-1);
	}
}