/* This is a C header file getNumber.h
 By Jacqueline Plata for CS1311 03/28/2024 
 */
 
 
 
 
 int a = 2, b=3, c; /* c in input from the user */
 
 
 
 void getInput(void) /* Get input from user */
 {
 	printf("Type in a number:  ");
 	scanf("%d", &c);
 	printf("You entered %i.\n\n", c);
 }
 
 
 
 
 void Add2(int x, int y) /* adds and prints x + y */
 {
 	printf("  %i  +  %i   =  %i", x, y, x+y);
 	
 }
