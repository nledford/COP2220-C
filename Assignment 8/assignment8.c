#include <stdio.h>

int main(int argc, char *argv[]) {
	
	
	/* Declare PartItem structure
	 * The PartItem structure contains three variables: the item number, it's price, and the
	 * available quantity.  After the structure is declared, an array of structures is declared.
	 * The array of structures contains three parts and their relevant information.
	 */
	struct PartItem {
		char Number[10];
		float Price;
		int qty;
	} Part[] = {
		{"SMS0001", 0.35, 20},
		{"OLS0002", 0.60, 30},
		{"VVU0001", 0.25, 50}
	};
	
	//Prepare for output by declaring column headers
	printf("Item Number     Price     Quantity");
	
	//Information from the Part structure array will be outputted via a for loop.
	for (int i = 0; i < 3; i++){
		printf("\n%s         %.2f         %i", Part[i].Number, Part[i].Price, Part[i].qty);
	}
	
	return 0;
}