#include <stdio.h>

int main(int argc, char *argv[]) {
	//Declare character variable to contain user's letter
	char userInput;
	
	//Explain purpose and "rules" of the program
	printf("Please enter a random letter.  I will know if you are actually entering a letter or if you try to sneak in a number on me!\n");

	//Assign user's letter to userInput variable
	scanf("%c", &userInput);
	
	//If the user enters a letter, confirm it is a letter and thank them
	//	Else, inform them that they have not entered a letter
	if ((userInput >= 'A' && userInput <= 'Z') || (userInput >= 'a' && userInput <= 'z')){
		printf("%c is a random letter indeed.  Thank you!", userInput);
	} else {
		printf("That is not a letter.  Please try again.\n"); 
	}
	
	return 0;
}