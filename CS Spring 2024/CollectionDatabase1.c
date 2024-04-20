/* This is a C program for CS1311 by Jacqueline Plata 2/21/2024
 * 
 * Write a C program that asks the user for information about 
 * TV shows coming out in 2024. For each item in the collection, 
 * ask for the name of the TV show, the genre of the TV show, 
 * and the cost of the production of the TV show. Store the 
 * information in a linked list of structures. After getting 
 * all the data in the linked list, print out the information 
 * in a table format. At the end, print the total number of 
 * items and the sum of the values of the items.
 * 
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
  #include<stdlib.h>
  #include<string.h>
  
  
  
  
	 struct shows { 
  					char name[50]; /* show name */
  					
  					char genre[50]; /* show genre */
  					
  					double value; /* dollar value of production */
  					
  					struct shows *next; /* link the list */
  			      };
  	struct shows *start, *current, *last; /* points to places in the list */
  	
  	
  	
  	char *GetName() /* Function to get Title of show */
  	{
  		char *str = malloc(50); /* Make space for Title */ 
  		
  		printf("\nEnter name of TV show: ");
		scanf("%s", str); /* Read in title */ 
		return str;	
  	}
  	


  	char *GetGenre() /* Function to get Genre of show */
  	{
  		char *gen = malloc(50); /* Make space for Genre */
  		
  		printf("\nEnter genre of TV show: ");
		scanf("%s", gen); /* Read in Genre */
		return gen;	
  	}
  	
  	
  	
  	int GetValue() /* Function to get Value of show */
  	{
  		int v; /* Used to hold the Value of the show entered */
  		
  		printf("\nEnter average cost of production per episode: ");
		scanf(" %i", &v); /* Read in Value */
		return v;
  	}


  
  void main(void)
  {
  	char input[50]; /* Used to figure out if the user wants to add another show */
  	
  	int count = 0; /* Used to count how many shows were entered */
  	
  	int total = 0; /* Used to hold the total cost of production from value */
  	
  	
  	
  	printf(" This program is going to ask you information about\n"
	  	   " TV shows coming out in 2024.\n"
		   " Please answer these questions. \n\n\n");
		   
		   
		   
	/* To get input from the user to see if they want to add a show */	 	
	printf("\nType Add to add a show: ");
 	scanf("%s", input); /* Read in input from user */



 	/* To figure out if the user is finished or wants to add a show */	
	while(strcmp(input, "done") != 0 && strcmp(input, "DONE") != 0 && strcmp(input, "Done") != 0)
	{
		
 			count = count + 1; /* Count how many shows are entered */ 
 			
 			
 			
 			/* To add another show */
 			current = malloc(sizeof(struct shows)); /* create first record */
 			strcpy(current->name, GetName()); /* Get name of show */
 			strcpy(current->genre, GetGenre()); /* Get genre of show */
 			current->value = GetValue(); /* Get cost of production */
 			total = total + current->value; /* Add total Value */
 			current->next = NULL; /* Set current in list to NULL */
 			if(start == NULL) /* If nothing in list yet set start to current */
 			{
 				start = current;
 			}
 			else /* if there is something else in the list before go to next */
 			{
 				last->next = current; /* point last element to new/next */
 			}
 			last=current; /* set last element to current */
 			
 			
 			
 			/* To get input from the user to see if they want to add another show */
 			printf("\nType done when are finished entering shows if not enter no: ");
 			scanf("%s", &input); /* Read in input from user */
 	}
 	
 	
 	
 	current = start; /* Set current to the beginning of list */
 	
 	
 	
 	/* Print out title and information titles */
 	printf("\n\n	    	     	TV SHOWS COMING OUT IN 2024 ");
 	printf("\n|       ITEM NAME              |     Genre     |         $Cost of Production     |\n\n");
 	
	 
	 
	 /* Print out the list of shows and its information */
	 while(current != NULL) /* print each record until reaches end of list */
 	{
 		printf("        %-15s              %-15s      $%.0lf per episode\n"
		 		, current->name, current->genre, current->value);
		current = current->next; /* Go to the next record */
	}
	
	
	
	printf("\n\nTotal Average Cost Of Production: $%i\n", total );
	printf("Count: %i\n", count); 
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
