/* This is a C program for CS1311 by Jacqueline Plata 2/11/2024
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
  	
  	char *GetName()
  	{
  		char *str = malloc(50);
  		
  		printf("Enter name of TV show: ");
		scanf("%s", str);
		//printf("%s", str);
		return str;	
  	}
  	
  	// head with start 
  	// add title to table 
  	
  	char *GetGenre()
  	{
  		char *gen = malloc(50);
  		
  		printf("Enter genre of TV show: ");
		scanf("%s", gen);
		//printf("%s", str);
		return gen;	
  	}
  	
  	
  	
  	int GetValue()
  	{
  		int v;
  		
  		printf("Enter cost of production: ");
		scanf(" %i", &v);
		//printf("%i", v);
		return v;
  	}


  

  void main(void)
  {
  	char input[50];
  	
  	printf(" This program is going to ask you information about\n"
	  	   " TV shows coming out in 2024. Question like the name\n"
		   " of the TV show, the genre and the cost of production.\n"
		   " Please answer these questions. \n");
		int count = 0;
	
	do	{
		
		//printf("--------str---------");
	//char *str = GetName();
	//printf("--------gen---------");
	//char *gen = GetGenre();


	
	if(count == 0)
	{
		printf("-----------count0-----------\n");
	current = malloc(sizeof(struct shows)); /* create first record */
 	strcpy(current->name, GetName());
 	strcpy(current->genre, GetGenre());
 	current->value = GetValue();
 	current->next = NULL;
 	last = current; /* point to last finished item */
 	start = current;
 	}
 	
 	if(count >= 1)
 	{
 		printf("-----------count1-----------\n");
 	current = malloc(sizeof(struct shows)); /* create first record */
 	strcpy(current->name, GetName());
 	strcpy(current->genre, GetGenre());
 	current->value = GetValue();
 	current->next = NULL;
 	last->next = current; /* point last element to new/next */
 	last=current;
 	}
 	
 	printf("Type done when are finished entering shows: ");
 	scanf(" %s", &input);
 	printf("----1-----%s\n", input);
 	
 	if(input != "DONE" || input != "Done" || input != "done")
	 {
	 	printf("----CountAdd0----%i\n", count);
	   count = count + 1;
	   printf("----CountAdd1----%i\n", count);
	 
	 }	
	//printf("-----2-----%s", input);
 	//count = count + 1;
 	printf("----2-----%s\n", input);
 	
	}while(input != "DONE" || input != "Done" || input != "done");
	
 	
 	
 	current = start;
 	printf("\n|     ITEM NAME     |     Genre     |      $VALUE     |\n\n");
 	while(current != NULL) /* print each record */
 	{
 	printf("        %-15s   %-10s        $%.0lf\n", current->name, current->genre, current->value);
 		current = current->next; /* Go to the next record */
	}


	
	
	
	
	
	
	

  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
