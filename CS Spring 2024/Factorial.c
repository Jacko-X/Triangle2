/* This is a C program by Jacqueline Plata for CS1311 1/18/2024
 * Play with recursion and factorial 
 */
 
 
 
 #include<stdio.h>
 
 
 
 int NonRecursive(int n) /* Return factorial of n */
 {
 	int i, factorial= 1; /* index, result to return */
 	
 	for(i = 1; i <= n; i++) /* multiply by each value 1 to n */
 	{
 		factorial = factorial * i;	
 	}
 	return(factorial);
 }
 
 
 
 int Recursive(int m) /* return factorial of m, recursivily */
 {
 	if(m == 1)
 		return 1; /* 1! = 1 */
 	else
 		{
 			printf("  %i * Recurive( %i) \n", m, m-1);
 			return (m * Recursive(m-1));		
 	}
 }
 
 
 
 void rec(int n)
 {
 	if(n>=4)
 	{
 		rec(n/2);	
 	}
 	printf("\nRec: ");
 	printf("n = %i\n", n);	
 }
 
 
 
 int f(int n, int k)
 {
 	if(k*n == 0)
 		return 1;
 	else
 		return f(n-1, k-1) + f(n-1,k);
 }
 
 
 
 
 void main(void)
 {
 	int num = 0, fact = 0; /* input and factorial result */
 	
 	
 	printf("This program finds factorial regularly and recursively. \n\n");
 	
 	while(num <= 0) /* Get postive value */
 	{
 		printf("Please enter a postive integer: ");
 		scanf("%d", &num);
 		printf("You entered %d. \n\n", num);	
 	}
 	
 	/* Print Factorials */
 	
 	fact = NonRecursive(num);
 	printf("   %i! = %i  in a non-recursive calculation \n", num, fact);
 	
 	fact = Recursive(num);
 	printf("  %i! = %i in a recursive calculation \n", num, fact);
 	
 	rec(16);
 	
 	//f(4,2);
 	printf("This is function f %i", f(4,2));


 	
 	
 	
 }
