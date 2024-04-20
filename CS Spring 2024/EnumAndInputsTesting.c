/* This is a C program by Jacqueline Plata for CS1311 03/26/2024

	Arguments to main and enum example 
*/
	



#include<stdio.h>
#include<stdlib.h>
#include<string.h>


enum test{no, yes};/* In testing mode or not */
enum test testing = no; /* if yes, print extra information */



void main(int argc, char *argv[]) /* takes in inputs to main */
{
	int i = 0; /* loop counter */
	
	while(i <= argc) /* to print all words in the command line */
	{
		printf("element %i is %s \n", i, argv[i]);
		i = i + 1;
	}
	
	if(argc > 1 && strcmp(argv[1], "debug") == 0) /* debug sent in */
	{
		printf("\n   *** argc = %i \n", argc);
		testing = yes;
	}
	else
	{
		printf("\nWe are in a non-testing mode.\n");
	}
	
	if(testing == yes)
	{
		printf("   *** Testing = %i, &testing = %p \n", testing, &testing);
	}
	
	if(argv[1] != NULL)
	{
		printf("\n first parameter = %s as integer = %i double = %lf \n", 
				argv[1], atoi(argv[1]), atof(argv[1]));
	}
		
		
	
	
	//getchar(); /* for exe window to stay open */
}
