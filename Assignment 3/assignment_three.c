#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/* Set up outer loop
	 * The outer loop will determine the number of 
	 * lines that will be printed by the program
	 */
	for (int a = 1; a <= 10; a++) {
		
		/* Set up inner loop
		 * The inner loop determines the number of characters that
		 * will be printed on each line.  Each time the outer loop
		 * is ran, the number of characters printed by the inner loop
		 * increases.
		 */
		for (int b = 1; b <= a; b++){
			printf("#");
		}
		
		//When the inner loop is finished, insert a line break
		printf("\n");
	}
	
	return 0;
}