/* This is a C program by Jacqueline Plata for CS1311 2/20/2024 
 *
 * To get 5 unique numbers between 1 and 100 
 * Use idea for lottery 
 *
 */ 
 
 
 
 
 #include<stdio.h>
 
 
 /* Return 1 if x in array, 0 if not in array */
 int check_for_unique(int x, int array[])
 {
 	int i, duplicate = 0; /* index to array, value to send back */
 	
 	for( i = 0; i < 5; i++) /* for each item in array check for x */
 	{
 		if(x == array[i])
 		{
 			duplicate = 1; 
 		}
 	}
 	return duplicate; 
 	
 }
 
 
 
 void main(void)
 {
 	int n = 0, count = 0, unique; /* user's, how many, unique = 0 if new */
 	int numbers[5] = {0, 0, 0, 0, 0}; /* array of unique vales 1-100 */
 	
 	printf("Giver 5 unique values from 1 to 100.\n");
 	
 	while( count < 5) /* Need 5 unique numbers */
 	{
 		printf("Enter an integers between 1 and 100: ");
 		scanf("%d", &n);
 		printf("You typed %i.\n", n);
 		
 		
 		
 		unique = check_for_unique(n,numbers);
 		
 		if(unique == 0  &&  n > 0  && n < 101) /* n is an ok value */
 			{
 				numbers[count] = n; /* put into the array */
 				count = count + 1;
 			}
 		else 
 		{
 			printf("%i is a duplicate or out of range.\n\n");
 		}
 	
 		
 	}
 		printf("\nThe list you entered is: \n");
 		for( count = 0; count < 5; count++)
 		
 		{
 			printf(" %i ", numbers[count]);
 		}
 	
 	
 }
