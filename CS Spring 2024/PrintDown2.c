/* This is a C Program by Jacqueline Plata for CS1311 1/11/2024
 * This program does cool stuff */
 
 
 
 #include<stdio.h>
 #include<string.h>
 
 
 
 void main(void)
 {
 	char string[80] = "test"; /* input from the user */
 	
 	int place = 0;            /* Spot in string */
 	
 	printf("This program prints your input downward.\n\n");
 	
 	printf("Type in a phrase: ");
 	gets(string);
 	printf("You entered\n   %s   \nand downward is \n", string);
 	
 	while(string[place] != '\0')   /* while more character check for \n */
 	{
 		printf("%c \n", string[place]);
 		place = place + 1; /* Move to the next character */
 		
 		
 	}
 	
 	
 	
 }
 
 
