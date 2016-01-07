#include "stdlib.h"
#include "stdio.h"


//NODE structure has been altered to use a character instead of an integer variable
struct NODE {
 char letter;
 struct NODE *next;
};

//Altered to use characters as parameters instead of integers
int  search_value(struct NODE *llist, char num);
void append_node(struct NODE *llist, char num);
void display_list(struct NODE *llist);
void delete_node(struct NODE *llist, char num);

int main(void) {
 //num and input are changed to character variables.
 char num;
 char input = 'I';
 int retval = 0;
 struct NODE *llist;
   
 //Altered llist to use letter instead of num.  The variable is not initialized.
 llist = (struct NODE *)malloc(sizeof(struct NODE));
 llist->letter;
 llist->next = NULL;
   
 while(input != 'Q') {
  /* Alter menu to use characters instead of numbers. 
   * scanf is changed to record string instead of integer
   */
  printf("\n-- Menu Selection --\n");
  printf("Q) Quit\n");
  printf("I) Insert\n");
  printf("D) Delete\n");
  printf("S) Search\n");
  printf("P) Display\n");
  scanf("%s", &input);


  //Switch has been altered to check for character input instead of integer input
  switch(input) {
   case 'Q': 
   default:
    printf("Goodbye ...\n");
    input = 'Q';
    break;
   case 'I':
    printf("Your choice: `Insertion'\n");
    printf("Enter the value which should be inserted: ");
    scanf("%s", &num);
    append_node(llist, num);
    break;
   case 'D':
    printf("Your choice: `Deletion'\n");
    printf("Enter the value which should be deleted: ");
    scanf("%s", &num);
    delete_node(llist, num);
    break;
   case 'S':
    printf("Your choice: `Search'\n");
    printf("Enter the value you want to find: ");
    scanf("%s", &num);
    if((retval = search_value(llist, num)) == -1)
     printf("Value `%s' not found\n", &num);
    else
     printf("Value `%s' located at position `%d'\n", &num, retval);
    break;
   case 'P':
    printf("You choice: `Display'\n");
    display_list(llist);
    break;
   } /* switch */
  } /* while */

 free(llist);
 return(0);
}

/* The functions has been altered to use the character variable letter instead of
 * the original num variable.  retval remains an integer variable since it is needed
 * to store, retrieve and delete values.
 */

void display_list(struct NODE *llist) {
 while(llist->next != NULL) {
  printf("%c ", llist->letter);
  llist = llist->next;
 }

 printf("%c", llist->letter);
}

void append_node(struct NODE *llist, char num) {
 while(llist->next != NULL)
  llist = llist->next;

 llist->next = (struct NODE *)malloc(sizeof(struct NODE));
 llist->next->letter = num;
 llist->next->next = NULL;
}

void delete_node(struct NODE *llist, char num) {
 struct NODE *temp;
 temp = (struct NODE *)malloc(sizeof(struct NODE));

 if(llist->letter == num) {
  /* remove the node */
  temp = llist->next;
  free(llist);
  llist = temp;
 } else {
  while(llist->next->letter != num)
   llist = llist->next;

  temp = llist->next->next;
  free(llist->next);
  llist->next = temp;
 }   
}

int search_value(struct NODE *llist, char num) {
 int retval = -1;
 int i = 1;

 while(llist->next != NULL) {
  if(llist->next->letter == num)
   return i;
  else
   i++;

  llist = llist->next;
 }

 return retval;
}