/* This is a C Program by Jacqueline Plata for CS1311 1/16/2024
 * 
 * Read and write from and to files
 */
 
 
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 
 
 
 void main(void)
 {
 	FILE *in, *out; /* access to in and out files */
 	char astring[100];
 	char acopy[99];
 	
 	printf("This program reads from in.txt and writes to out.txt.\n\n");
 	in = fopen("in.txt", "r");
 	out = fopen("out.txt", "w");
 	
 	//Read in and print out the string to the screen and to the file 
 	fgets(astring, 80, in);
 	printf("The text from in.txt is \n %s \n", astring);
 	fprintf(out, "The text from in.txt is \n %s \n and then some", astring);
 	
 	printf("length of a string = %i\n", strlen(astring));
 	strcpy(acopy, astring);
 	printf("\nacopy = %s  \n  string compare of both = %i\n",
 			acopy, strcmp(acopy,astring));
 	
 	fclose(in);
 	fclose(out);
 	
 	
 }
