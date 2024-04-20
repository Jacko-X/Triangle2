/* This is a C Program by Jacqueline Plata for CS1311 3/18/2024

	This is a C Program that asks the user to think of an integer 
	number from 1 to 20. Have the computer guess what the number 
	is by using a binary tree to determine the next guess. Create 
	the binary tree by typing in a set of assignments and explicity 
	linking the nodes. (make the tree completely, then traverse the 
	tree) Use a menu to provide the user with a selection to answer
	the results of the guess.
	 
           !~                       
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
  
  
  
  struct guess{
  					int num; /* number to guess */
  					struct guess *less; /* left child */
  					struct guess *more;	/* Right child */
  	};
  	struct guess *current; /* pointer for current node */
  	struct guess one, two, three, four, five, six, seven,
  	eight, nine, ten, eleven, twelve, thirteen, fourteen,
  	fifteen, sixteen, seventeen, eighteen, nineteen, twenty; /*nodes */
  
  
  
  void Create_guess(void) /* Creating the binary tree 1-20 */
  {
  	ten.num = 10; /* node 10 - root */
  	ten.less = &five; /* less than 10 */
  	ten.more = &fifteen; /* more than 10 */
  	
  	five.num = 5; /* node 5 */
  	five.less = &three;/* less than 5 */
  	five.more = &seven;/* more than 5 */
  	
  	three.num = 3; /* node 3 */
  	three.less = &two;/* less than 3 */
  	three.more = &four; /* more than 3 */
  	
  	two.num = 2; /* node 2 */
  	two.less = &one;/* less than 2 */
  	two.more = NULL;/* more than 2 */
  	
  	one.num = 1; /* node 1 */
  	one.less = NULL;/* less than 1 */
  	one.more = NULL; /* more than 1 */
  	
  	four.num = 4; /* node 4 */
  	four.less = NULL;/* less than 4 */
  	four.more = NULL;/* more than 4 */
  	
  	seven.num = 7; /* node 7 */
  	seven.less = &six;/* less than 7 */
  	seven.more = &nine;/* more than 7 */
  	
  	six.num = 6; /* node 6 */
  	six.less = NULL;/* less than 6 */
  	six.more = NULL;/* more than 6 */
  	
  	nine.num = 9; /* node 9*/
  	nine.less = &eight;/* less than 9 */
  	nine.more = NULL;/* more than 9  */
  	
  	eight.num = 8; /* node 8 */
  	eight.less = NULL;/* less than 8  */
  	eight.more = NULL;/* more than 8  */
  	
  	fifteen.num = 15; /* node 15 */
  	fifteen.less = &thirteen;/* less than 15 */
  	fifteen.more = &eighteen;/* more than 15 */
  	
  	thirteen.num = 13; /* node 13 */
  	thirteen.less = &twelve;/* less than 13 */
  	thirteen.more = &fourteen;/* more than 13 */
  	
  	twelve.num = 12; /* node 12 */
  	twelve.less = &eleven;/* less than 12 */
  	twelve.more = NULL;/* more than 12 */
  	
  	eleven.num = 11; /* node 11 */
  	eleven.less = NULL;/* less than 11 */
  	eleven.more = NULL;/* more than 11 */
  	
  	fourteen.num = 14; /* node 14 */
  	fourteen.less = NULL;/* less than 14 */
  	fourteen.more = NULL;/* more than 14 */
  	
  	eighteen.num = 18; /* node 18 */
  	eighteen.less = &seventeen;/* less than 18 */
  	eighteen.more = &twenty;/* more than 18 */
  	
  	seventeen.num = 17; /* node 17 */
  	seventeen.less = &sixteen;/* less than 17 */
  	seventeen.more = NULL;/* more than 17 */
  	
  	sixteen.num = 16; /* node 16 */
  	sixteen.less = NULL;/* less than 16 */
  	sixteen.more = NULL;/* more than 16 */
  	
  	twenty.num = 20; /* node 20 */
  	twenty.less = &nineteen;/* less than 20 */
  	twenty.more = NULL;/* more than 20 */
  	
  	nineteen.num = 19; /* node 19 */
  	nineteen.less = NULL;/* less than 19 */
  	nineteen.more = NULL;/* more than 19 */
  	
  	printf("Let me start to guess your number.\n\n");
  }
  
  
  
  
  
  
  void main(void)
  {
  	int menuChoice = 0; /* user menu selection */

  	
  	
  	printf( "This is a C program that will ask you to think of an\n" 
	  		"integer number from 1 to 20. The computer will then\n" 
			"guess what the number is by using a binary tree to\n" 
			"determine the next guess. The menu below provides\n" 
			"you with a selection to answer the results of the\n" 
			"guesses. Please be truthful in your answers to the\n" 
			"computer.\n");
			
	printf("\n\nThink of a number between 1 and 20 and the computer" 
				" will try to guess it\n\n");
		
		
		
	Create_guess(); /* Creating the binary tree 1-20 */
	current = &ten; /* Start at root */
	
	
	
	/* Print menu if number not correctly guessed and not at end of tree */
	while(current != NULL && menuChoice != 3)
	{
		printf("\n*************************************************\n");
		printf("!		Is your number %i?		!\n", current->num);
		printf("! ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^	!\n");
		printf("!                      Menu			!\n");
		printf("!       					!\n");
		printf("!	----------------------------		!\n");
		printf("!	1. My number is less than %i		!\n",current->num);
		printf("!	----------------------------		!\n");
		printf("!	----------------------------		!\n");
		printf("!	2. My number is more then %i		!\n",current->num);
		printf("!	----------------------------		!\n");
		printf("!	----------------------------		!\n");
		printf("!	3. You got my number			!\n");
		printf("!	----------------------------		!\n");
		printf("!						!\n");
		printf("!		       <**>			!\n");
		printf("!		        /\\			!\n");
		printf("!		       /  \\			!\n");
		printf("!                     /  * \\			!\n");
		printf("!                     ~ +  ~			!\n");
		printf("!                     /    \\			!\n");
		printf("!                    / *  ! \\			!\n");
		printf("!                   /   +    \\			!\n");
		printf("!                  /  !    *  \\			!\n");
		printf("!                  ~  *    +  ~			!\n");
		printf("!                  /     *    \\			!\n");
		printf("!                 /   +     *  \\		!\n");
		printf("!                /  *   +    !  \\		!\n");
		printf("!               /          *     \\		!\n");
		printf("!              / +   *   +    *   \\		!\n");
		printf("!              ~~~~~~~~~~~~~~~~~~~~		!\n");
		printf("!                       | |			!\n");
		printf("*************************************************\n");

		printf("Type in 1, 2, or 3 and enter: ");
		scanf("%i", &menuChoice); /* Read in user's choice from menu */
		
    
    
  		switch(menuChoice) /* move down the tree */
  		{
   	 		case 1:
    			current = current->less; /* go to left child */
    			break;
    		case 2: 
    			current = current->more; /* go to the right child */
    			break;
    		case 3: /* Correct number guessed */
    			printf("Computer guessed your number is %i \n\n", current->num);
				break;
			default: /* if 1, 2, and 3 not entered */
				printf("%i is not a vaild number. \n\n", menuChoice);	
   	    }	
    }
    
    
    
    if(current == NULL) /* went off the end of the list */
    {
    	printf("Did you get confused?\n\n");	
    }
  
}


