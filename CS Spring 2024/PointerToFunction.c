/* This is a c Program by Jacqueline Plata for CS1311 03/19/2024

	Example of a pointer to a function 

*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>




void print_random(void) /* Print a random integer */
{
	printf("A random integer is %i.\n\n", rand()); 
	
	
	
	
}



void main(void)
{
	void (*pfunction) (void); /* pointer to a funciton with no i/o */
	
	printf("Playing with a pointer to a function.\n\n");
	
	srand(time(NULL)); /* Seed random numbers */
	rand(); /* get a better random value next */
	
	pfunction = print_random;
	
	print_random(); /* Calling the usually way */
	(*pfunction)(); /* Calls function with address*/
	print_random(); /* Calling the usually way */
	(*pfunction)(); /* Calls function with address*/
	print_random(); /* Calling the usually way */
	(*pfunction)(); /* Calls function with address*/
	
}
