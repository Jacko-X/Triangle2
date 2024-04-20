/* This is a C program by Jacqueline Plata for CS1311	 03/28/2024 
 
 	define.c 
 	example of define, macros and conditional compulation 
 */
 
 
 
 
 #include<stdio.h>
 #include "getNumber.h"
 
 
 
 #define Test 9 // chnage to 9 later 
 #define Cube(z) z*z*z 
 #define Multiply3(w,x,y) w*x*y
 extern int a, b, c;
 
 
 
 void main(void)
 {
 	#ifdef Test
 		printf("Test exists.\n");
 	#endif
 	#if Test == 9
 		printf("Test has the value 9.\n");
 	#endif
 	
 	printf("Using a macro the Cube of 5 is %i.\n", Cube(5));
 	
 	getInput(); /* put a value into c */
 	
 	Add2(12, c);
 	
 	printf("\nThe cube of %i is %i.\n\n", c, Cube(c));
 	printf("  2 * 3 * %i = %i \n",c, Multiply3(a,b,c));
 	
 	
 	
 }
