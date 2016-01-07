#include <stdio.h>

int main(int argc, char *argv[]) {
	
	//Set up variables to hold values containing user input and calculations performed by program
	float milesDriven, costOfGas, avgMPG, tolls, dailyCost, weeklyCost, monthlyCost, yearlyCost;
	
	//Display message explaining purpose of the program
	printf("Hello. This program will help you calculate your driving costs so that you can save money.\n");
	
	//Ask questions and store user input to variables
	printf("How many miles do you drive per day?\n");
	scanf("%f", &milesDriven);
	
	printf("What is your local cost of gas?\n");
	scanf("%f", &costOfGas);
	
	printf("What is your car's average miles per gallon?\n");
	scanf("%f", &avgMPG);
	
	printf("Do you have any parking and toll fees?\n");
	scanf("%f", &tolls);
	
	//If user does not pay tolls, perform calculations excluding the tolls variable
	//If they do pay tolls, perfom calculations including the tolls variable
	if (tolls == 0) {
		dailyCost 		= (milesDriven/avgMPG) * costOfGas;
	} else {
		dailyCost 		= (milesDriven/avgMPG) * costOfGas * tolls;
	}
	
	//Perform remaining calculations normally
	weeklyCost 		= dailyCost * 7;
	monthlyCost 	= weeklyCost * 4;
	yearlyCost 		= monthlyCost * 12;
	
	//After calculations have been performed, display results of calculations to user
	printf("\nYour average costs are:\n\n");
	printf("Your daily cost is $%.2f\n", 		dailyCost);
	printf("Your weekly cost is $%.2f\n", 	weeklyCost);
	printf("Your monthly cost is $%.2f\n", 	monthlyCost);
	printf("Your yearly cost is $%.2f\n", 	yearlyCost);
	
	return 0;
}