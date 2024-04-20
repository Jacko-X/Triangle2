/* This C Program by Jacqueline Plata for CS1311 1/23/2024
 * Video watch later
 * 
 * Recursive with main
 * Ask for a letter print a letter, until z, call main
 */
 
 
 
 #include<stdio.h>
 #include<stdlib.h>
 
 
 
 void main(void)
 {
 	char letter, newline; /* holds input from the user */
 	
 	printf("This program calls main recursively. \n ");
 	printf("Please type in a letter or z to finish: ");
 	scanf("%c%c", &letter, &newline); /* Read in a char and \n */
 	printf(" The letter you typed is %c.\n ", letter);
 	
 	if(letter != 'z' ) /* run until letter is z */
 		main();
 
 	printf(" after call to main, letter is %c.\n", letter);
 }
