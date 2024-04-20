/* This is a C program by Jacqueline Plata for CS1311 2/15/2024
 * 
 * buble sort of an integer array */
 
 
 
 #include<stdio.h>
 
 
 
 void print_array(int m, int array[]) /* print each value in array */
 {
 	int i; /* index into array */
 	
 	printf("\nThe list values are: \n\n"); /* put into a function */
 	for(i = 0; i < m; i++) /* print each value in list */
 	{
 		printf("  %i  ", array[i]);	
 	}
 	printf("\n\n");
 }
 
 
 
 void main(void)
 {
 	int list[10] = {27, 5, 7, 17, 3,90, 45, 23, 27, 34};  /* list to sort - put your numbers */
 	int i, n = 10, temp, sorted = 1; /* indexes, flag */
 	
 	printf("This program bubble sorts a list.\n\n");
 	
 	print_array(n, list);
 	
 	printf("Sorting your list ....\n");
 	
 	do  {  /* while list is not sorted */
 			sorted = 1; /* assume sorted */
 			for( i = 0; i<n-1; i++) /* check each ajacent pair */
 			{
 				if(list[i] > list[i+1])  /* if first greater than second swap */
 				{ /* swap list items */
 					temp = list[i];
 					list[i] = list[i+1];
 					list[i+1] = temp;
 					sorted = 0; /* It is not yet sorted */
 				}
 			}
 		}while( sorted == 0); /* List was not sorted */
 	
 	print_array(n, list);

 	
 	
 	
 }
