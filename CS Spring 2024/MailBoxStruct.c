/* This is a C program by Jacqueline Plata for CS1311 
 * 1/25/2024
 * 
 * Asks the user for name and address information 
 * Stores the infomation in struct
 * Print a mailing label using a structure 
 */
 
 
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 
 
 
 
 struct mailing{ /* data for labels */
 			char name[60];
			char street[60];
			char city[35];
			char state[25];
			int zip;
 		};
 	
 
 
 void main(void)
 {
 	struct mailing label;
 	
 	printf("This program will print out mailing labels.\n\n\n ");
 	/* Get info for label */
 	printf("\nPlease type in your name: ");
 	gets(label.name);
 	printf("\nPlease type in your street address: ");
 	gets(label.street);
 	printf("\nPlease type in your city: ");
 	gets(label.city);
 	printf("\nPlease type in your state: ");
 	gets(label.state);
 	printf("\nPlease type in your zip code: ");
 	scanf("%d", &label.zip);
 	
 	
 	/* print out the label */
 	printf("\n\n\n %s \n", label.name);
 	printf(" %s \n", label.street);
 	printf(" %s , %s  %i \n\n", label.city, label.state, label.zip);
 	
 	
 	
 	
 }
