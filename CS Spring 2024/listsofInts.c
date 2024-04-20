/* This is a C program by Jacqueline Plata for CS1311 2/6/2024
 *
 * For design -  a linked list of structires with a name field, pointer field 
 * Add a string 
 * 
 * main - print "THis program creates and prints a list of positive integers"
 * 		- head = Null
 * 		- input = get_input
 * 		- while input not 0 in our program done, Done, DONE
 * 		- 	add_record
 * 		- 	input = get_input 
 * 		- print_list 
 *
 * (isn't for collection) get.input - while n < 0 print ask for a value scan in print in out
 *  								- return in 
 *
 * print_list  - element = head
 * 				- print your numbers are
 * 				- while element != null
 * 				- print element at num
 * 				- element = element at ptr
 *
 * add_record - get space for int list record 
 				- element at num = in  (+) more lines in program
 				- element at ptr = Null
 				- if head is null then we let head = element 
 				- else last at ptr = elements 
 				- last = element 
 *
 
 
 
 
 
 
 * This program - creates and prints a linked list of positive integers 
 */
 
 
 
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 
 
 
 
 struct intlist{ /* list of positive integers */
 				int num;
 				struct intlist *ptr;
 			};
 			struct intlist *head, *element, *last;
 			
 			

int get_input(void) /* get users positive number */
{
	int n = -1; /* negative will go into the loop */
	
	while( n < 0)
	{
		printf("Enter a positive integer or 0 to stop: ");
		scanf("%d", &n);
		printf("You typed %i.\n\n", n);	
	}
	return n;	
}



void add_record(int number) /* put number on the list */
{
	//printf("--		--in add_record number = %i \n", number);
	
	element = malloc(sizeof(struct intlist));
	element -> num = number;
	element -> ptr = NULL;
	
	if(head == NULL)
	{
		head = element;
    }
    else
    {
    	last -> ptr = element; /* hook up last element to the list */	
    }
    last = element; /* move last to the end of list */
}



void print_list(void)/* print each number in list */
{
	int count;
	printf("\n");
	element = head; /* start at first record */
	printf("The list you created is\n");
	while(element != NULL) /* print number until end of the list */
	{
		printf("   %i \n ", element->num);
		element = element->ptr; /* go to next record */
		count = count + element->num;
		printf(" Count is: ", count);
	}
	
	
}

 
 
 void main(void)
 {
 	int input = -1; /* user number must be positive; 0 when done */
 	
 	printf("This program creates a prints a list of integers.\n\n");
 	
 	head = NULL;
 	
 	input = get_input();
 	
 	printf("%i will be added to the list unless it is zero.\n\n", input);
 	
 	while(input != 0) /* put values on until zero */
 	{
 		add_record(input);
 		input = get_input();
 	}
 	
 	print_list();
 	
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
