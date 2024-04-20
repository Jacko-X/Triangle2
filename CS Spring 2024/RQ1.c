/* This is a C program by Jacqueline Plata for CS1311 1/26/2024
 * 
 * This program finds the value of a specific quadratic function 
 * f(x) = ax^2 + bx + c
 * Find the value of your function in the regular way and 
 * using the recursive function call.
 * Ask the user for a positive integer value (a loop), and 
 * print out the two result.
 * Ask the user to run again or not. 
 */
 
 
 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 
 
 
 
 
 int RecurSq(int n)
 {
 	if(n == 0)
 	{
 		return 0;	
 	}
 	else
 		return(RecurSq(n-1)+(2*(n-1))+ n);	
 }
 
 
 
 void main(void)
 {
 	int num;
 	int A = 1;
 	int B = 5;
 	int C = 4;
 	int y;
 	
 	
 	printf("This program calculates f(x)= x^2 + 5x + 4\n"
 			"In two ways the regular way and the recursive way\n\n");
 			
 	while(num <= 0)
 	{
 		printf("Please type a postive number: ");
 		scanf("%i", &num);
 		printf("The number entered is: %i\n\n", num);
 	}
 	
 	//printf("\n--- %i ---- ", A);
 	//printf("\n--- %i ---- ", B);
 	//printf("\n--- %i ---- ", C);
 	
 	printf("f(x) = %i + %i + %i\n", A*num*num, B*num, C);
 	
 	y = RecurSq(num);
 	printf("%i", y);
 	
 }
