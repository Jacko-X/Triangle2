/* This is a C program by Jacqueline Plata for CS1311 2/02/2024
 * 
 * This program finds the value of a specific quadratic function 
 * Regular function: f(x) = 1x^2 + 5x + 4
 * Recursive function: f(x-1) + 2x + 4 
 * 						f(0) = 4
 * Find the value of your function in the regular way and 
 * using the recursive function call.
 * Ask the user for a positive integer value (a loop), and 
 * print out the two result.
 * Ask the user to run again or not. 
 *         !~                       
  ^:      !@&!      :^               
 ~CSP:   !#@&#!   :JVK~               
  .C@P    ^@&^    J@P.                
   .S@^   :@&:   ^@V.                  
    ^@P   :@&:   K@^                  
     G@:  :@&:  :@G                   
     J@BM##@@##MN@J                   
      ^5!~!@&!~!5^                   
          ^@&^                       
          ^@&^                       
          ^**^       
  */
 
 
 
 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 
 
 
 int Recur(int n) /* Recursive way to solving the function run until solved*/
 {
 	if(n == 0) /* if number entered is zero answer is 4 */
 	{
 		return 4;	
 	}
 	else
 		return(Recur(n-1)+2*n + 4);	/* Recursive Formula */
 }
 
 
 
 void main(void)
 {
 	int num; /* Holds input from user for formula*/
 	
 	char again; /* Holds input from user to run again */
 	
 	

	do{	 
		printf("\nThis program calculates f(x)= x^2 + 5x + 4\n"
 			"In two ways the regular way and the recursive way.\n\n");\



 		while(num <= 0) /* Keeps going until it gets a positive number from the user */
 		{
 			printf("Please type a postive number: ");
 			scanf(" %i", &num); /* Reads in number from user */
 			printf("The number entered is: %i\n\n", num);
 		}



		/* prints answer to function with num the regular way */
 		printf("The regular way:\nf(x) = %i + %i + %i\nf(x) = %i", 
		 		1*num*num, 5*num, 4, 1*num*num + 5*num + 4); 
 		
 		
 		
 		/* Call the recursive function with num */
 		printf("\n\nThe recursive way: %i", Recur(num)); /* prints answer from recursive function */
 	
 	
 	
 		/* Asks the user if they want to run again */
 		printf("\n\nTo run again enter Y\nTo stop enter N\n");
		scanf(" %c", &again); /* Reads in answer to see if the user wants to run again */
		
		
		
		num = 0; /* Set num to zero so if the program runs again it won't be the number before */



 	}while(again == 'Y' || again == 'y'); /* Run again if user enters y or Y */	
 }
