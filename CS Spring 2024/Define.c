/* This is a C program by Jacqueline Plata for CS1311	 03/28/2024 
 
 	define.c 
 	example of define, macros and conditional compulation 
 */
 
 
 
 
 #include<stdio.h>
 
 
 
 #define Test 99 // chnage to 9 later 
 #define Cube(z) z*z*z 
 #define Multiply3(w,x,y) w*x*y
 
 
 
 void main(void)
 {
 	#ifdef Test
 		printf("Test exists.\n");
 	#endif
 	#if Test == 9
 		printf("Test has the value 9.\n");
 	#endif
 	
 	printf("Using a macro the Cube od 5 is %i.\n", Cube(5));
 	
 	
 	
 	
 }
