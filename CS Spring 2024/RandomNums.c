/* C Program for CS1311 by Jacqueline Plata 2/8/2024 
 * To show random numbers (positive integers)
 * Print 3 random numbers
 * Seed the rand function
 * Print 3 random numbers
 * Print 3 between 0 and 99
 * Print 3 between 1 and 100
 * get a maximum number
 * print 5 numbers between 1 and maximum 
 *Get how many to print 
 * Print that many between 1 and maximum
 */
 
 
 
 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 #include<time.h>
 
 
 
 int positiveInteger(void) /* Return an integer > 1 */
 {
 	int value = 0; /* user input, 0 to go into the loop first*/
 	
 	while(value <= 1) /* Value must be larger than 1 */
 	{
 		printf("Type and integer > 1:  ");
 		scanf("%d", &value );
 		printf("You entered %i\n", value);	
 	}
 	return value;
 }
 
 
 
 void main(void)
 {
 	int index, max, howmany, min; /* Counter, user, inputs */
 	
 	printf("Random number play!\n\n");
 	
 	for(index = 1; index <= 3; index++) /* pseudo-random */
 	{
 		printf("index = %i	A random value is %i.\n", index,rand());
 	}
 	printf("\n");
 	
 	
 	
 	srand(time(NULL)); /* Seed the random number generator */
 	
 	rand();	/* To get more random looking values, ignore first */
 	
 	for(index = 1; index <= 3; index++) /* better-random */
 	{
 		printf("index = %i	A random value is %i.\n", index,rand());
 	}
 	printf("\n");
 	
 	
 	
 	printf("Random numbers between 0 and 99: \n\n");
 	
 	for(index = 1; index <= 3; index++) /* 3 values between 0 and 99 */
 	{
 		printf("index = %i	A random value is %i.\n", index,rand()%100);
 	}
 	printf("\n");
 	
 	
 	
 	printf("Random numbers between 1 and 100: \n\n");
 	
 	for(index = 1; index <= 3; index++) /* 3 values between 1 and 100 */
 	{
 		printf("index = %i	A random value is %i.\n", index,rand()%100+1);
 	}
 	printf("\n");
 	
 	
 	
 	printf("What maximum number is allowed?	");
 	max = positiveInteger();
 	
 	for(index = 1; index <= 3; index++) /* 3 values between 1 and max */
 	{
 		printf("index = %i	A random value is %i.\n", index,rand()%max+1);
 	}
 	printf("\n");
 	
 	
 	
 	printf("How much numbers do you want?	");
 	howmany = positiveInteger();
 	
 	for(index = 1; index <= howmany; index++) /* values between 1 and max */
 	{
 		printf("index = %i	A random value is %i.\n", index,rand()%max+1);
 	}
 	printf("\n");
 	
 	
 	
 	do{/* Get integer between 1 and max */
 			printf("What is the minimum value you want?	 ");
 			scanf("%d", &min); /**** min between 2 and max-1*/
 			printf("You typed %i, (must be >2 and <%i)\n", min, max);
 	  }while(min<2 || min>=max );
 	for(index = 1; index <= howmany; index++) /* values between min and max */
 	{
 		printf("index = %i	A random value is %i.\n", index,rand()%(max-min+1) + min);
 	}
 	printf("\n");
 	
 }
