#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	
	//Set up variables to be used by program
	int x, y, answer, guess;
	
	//Set up dummy variable for infinite loop
	int a = 1;
	while (a == 1){
		/* Assign random values to variables.
		 * New values are assigned every time 
		 * the program runs through the loop.
		 */
		x = rand() % 10;
		y = rand() % 10;
		
		//Calculate and assign answer to variable
		answer = x * y;
		
		//Prompt user to enter their guess
		printf("What is %d times %d?\n", x, y);
		scanf("%d", &guess);
		
		/* A do/while loop is used to check the user's guess
		 * because a guess will always be checked at least once.  
		 * A dummy variable is used to keep track of whether the 
		 * loop will continue to run or cease execution.  As long
		 * as the user continues to enter incorrect answers,
		 * the loop will continue to execute
		 */
		int b = 1; //Dummy variable
		do {
			//Correct answer
			if ( guess == answer){
				printf("Very good!\n\n");
				b = 0; //Cease execution of do/while loop
			} 
			//Incorrect answer
			else if (guess != answer) {
				printf("No. Please try again.\n");
				scanf("%d", &guess); //User is prompted to enter another guess
				b = 1; //Continue execution of do/while loop
			}
		} while ( b == 1 );
	}
	
	return 0;
}