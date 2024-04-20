/* C Program by Jacqueline Plata for CS1311 1/10/2024
 * This programs reads in 20 family members names 
 * from the file names.txt and puts them in to an array. 
 * Then writes the names out to the screen and to a file 
 * called trans.txt so the names can be read down instead 
 * of across. 
 *        !~                       
  ^:     !@&!     :^               
 ~CSP:  !#@&#!  :JVK~               
  .C@P   ^@&^   J@P.                
   .S@^  :@&:  ^@V.                  
    ^@P  :@&:  K@^                  
     G@: :@&: :@G                   
     J@BM#@@#MN@J                   
     ^5!~!@&!~!5^                   
         ^@&^                       
         ^@&^                       
         ^**^       
  */
 
 
 
 #include<stdio.h>
 #include<string.h>
 
 

 void main(void)
 {
 	
 	int i, j; /* Integers to itterate though for loop */
 	
 	FILE *in, *out; /* Access to names.txt file and */
 	
 	char names[20][60]; /* Array to hold the names */
 	
 	in = fopen("names.txt", "r"); /* Open and read file */
 	
 	out = fopen("trans.txt", "w"); /* Open and write in file */
 	
 	
 	
 	printf( "This programs reads in 20 family members names\n"
	 		"from the file names.txt and puts them in to an array.\n"
			"Then changes the format of the names to be read down\n"
			"instead of across. The names are printed out to a new\n"
			"file called trans.txt and to the screen.\n\n");
 	
 	
 	
 	for(i=0; i<20; i++) /* Fill the names array with blanks */
 	{
 		for(j=0; j<60; j++)
 		{
 			names[i][j] = ' ';
 		}	
 	}
 	
 	
 	
 	for(i = 0; i < 20; i++) /* Gets names from names.txt file */
 	{
 		fgets(names[i], 60, in);
 	}



 	for(j=0; j<60; j++) /* Itterates through names array */ 
 	{
 		for(i=0; i<20; i++)
 		{
 			/* Don't print out character if its the end of name or new line */
 			if(((names[i][j]) != '\n') && ((names[i][j]) != '\0'))
 			{
	  			printf("%c  ", names[i][j]); /* Print out characters to screen */
	  			fprintf(out, "%c  ", names[i][j]); /* Print out characters to file */
	  		}
			else
	  		{
	  			printf("   ");
				fprintf(out, "   ");	
	  		}
 		}
 		printf("\n");
 		fprintf(out, "\n");	
 	}
 	
 	
 	
 	/* Close files */
 	fclose(in);
 	fclose(out);	
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
