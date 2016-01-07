#include <stdio.h>

int main(int argc, char *argv[]) {
	
	//Establish variables to be used with program
	float numberOne, numberTwo;		//float variables contain user input
	int runCalc = 0;				//Determines whether the loop runs or terminates
	char operation;					//Decides which mathematical operation to perform
	
	//Welcome message
	printf("Welcome to the calculator program. I can perform a simple calculation for you.\n");
	
	/* Start while loop
	 * Loop first instructs user how to enter values and asks them for input
	 * It then determines which operation the user wants to perform, performs it and displays output
	 * Asks the user if they would like to perform another calculation.  If they enter 0, loop continues.
	 * If they enter 1 (or any other number), loop exits
	 */
	while (runCalc == 0){
	
		printf("Enter two numbers and an operator in the format\n");
		printf("number1 operator number2\n");
		scanf("%f %c %f", &numberOne, &operation, &numberTwo);
		
		if (operation == '+'){
			printf("%f %c %f is %f\n", numberOne, operation, numberTwo, (numberOne + numberTwo));
		}
		else if (operation == '-') {
			printf("%f %c %f is %f\n", numberOne, operation, numberTwo, (numberOne - numberTwo));
		}
		else if (operation == '*'){
			printf("%f %c %f is %f\n", numberOne, operation, numberTwo, (numberOne * numberTwo));
		}
		else if (operation == '/'){
			printf("%f %c %f is %f\n", numberOne, operation, numberTwo, (numberOne/numberTwo));
		}
		
		printf("Would you like to enter another calculation? 0 = Y, 1 = N\n");
		scanf("%i", &runCalc);
	}
	
	//Display parting message
	printf("Goodbye!");
	
	return 0;
}