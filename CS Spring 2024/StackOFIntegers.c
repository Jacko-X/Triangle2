/* This is a C program by Jacqueline Plata for CS1311 04/18/2024

	Messing with a stack of integers 

*/



#include <stdio.h>


int stack[1000]; /* For a stack of integers" CHECK for less than 1000 */
int top = -1; /* To put in the stack; top of the stack */



void push(int add) /* Put add on top of the stack */
{
	/* CHECK for limit of stack */
	top = top + 1;
	stack[top] = add;
}

void pop(void) /* Take top item off the stack */
{
	if(top < 0) /* no items in stack */
	{
		printf("There are no items in the stack");
	}
	else
	{
		printf(" %i will be taken off the stack.\n", stack[top]);
		top = top - 1; 	
	}
	
}



void printStack(void) /* print active items in the stack */
{
	int i; /* to index into stack */
	
	printf("\n#####\n");
	
	for(i = top; i >= 0; i--)
	{
		printf("   %i is in spot %i\n", stack[i], i);
		
	}
	
	printf("\n#####\n");
}



void main(void)
{
	int option, data; /* For menu selection and pop*/
	
	printf("This program emulates a stack of integers.\n\n");
	
	do{ /* print menu */
	
		printf("\n\nSelect an operation for the stack: \n");
		printf("   1. Push - put an integer on the stack\n"
			   "   2. Pop - Take off an integer from the stack.\n"
			   "   3. Peak - Look at first item.\n"
			   "   4. Print the stack from top to bottom.\n"
			   "   5. Quit\n"
			   "Type 1, 2, 3, 4, or 5 and Enter:  ");
		scanf("%d", &option);
	
	switch(option) /* Do the stack operation from the menu */
	{
		case 1: /* Push */
				printf("\n Type in integer value to push and Enter:  ");
				scanf("%d", &data);
				push(data);
				break; 
		case 2: /* Pop */
		        pop();
		        break;
		case 3: /* Peak */
				if(top>=0)
				{
					printf("\nPeeking shows %i\n", stack[top]);
				}
				else
				{
					printf("There are no items in the stack");	
				}
				break; 
		case 4: /*print stack*/
				printStack();
				break;
		case 5: 
				printf("\n\nThanks for using this stack emulator. \n");
				break;
		default:
				printf("\n%i is not a vaild option. Try again.\n",
						option);	
		
	}
	
	}while(option != 5); 


	
	
}




