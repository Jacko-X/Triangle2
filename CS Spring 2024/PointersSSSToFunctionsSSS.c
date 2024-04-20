/* This is a C Program by Jacqueline Plata for CS1311 03/19/2024

	More xamples of a pointer to a functions 

*/




#include <stdio.h>




int square(int x) /* returns the square of x */
{
	return (x*x);
	
}



double addition(double a, double b) /* return the sum of a and b */
{
	return(a+b);
	
	
}

int Multiply(int c, int d, int e) /* return the product of c, d and e */
{
	return(c*d*e);	
}



void main(void)
{
	int input, number; /* from user; for return */
	int (*pfunc2)(int); 
	double D; /* for return from addition */
	double (*pfunc3)(double, double); 
	int (*pfunc4)(int, int, int);
	int A, B, C, M; 
	
	
	
	printf("This program shows pointers to functions.\n\n");
	pfunc2 = square; 
	
	printf("Type in an integer to square: ");
	scanf("%d", &input);
	number = (*pfunc2)(input);
	printf("The square of %i is %i.\n\n", input, number);
	
	pfunc3 = addition;
	D = (*pfunc3)(1, 2);
	printf("The sum of 1 and 2 is %lf.\n\n", D);
	
	
	printf("Type in an integer to multiply: ");
	scanf("%i", &A);
	printf("Type in an integer to multiply: ");
	scanf("%i", &B);
	printf("Type in an integer to multiply: ");
	scanf("%i", &C);
	pfunc4 = Multiply;
	M = (*pfunc4)(A,B,C);
	printf("The product of %i * %i * %i is %i.\n\n",A, B, C, M);
	
	
	
	
	
	
}



