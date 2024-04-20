/* This is a C Program for CS1311 by Jacqueline Plata 2/27/2024
 *
 * Create a guessing binary tree for 1-7 
 *
 */
 
 
 
 #include<stdio.h>
 
 
 
 
 struct guess7  {
 					int num; /* number to guess */
 					struct guess7 *less; /* Left child */
 					struct guess7 *more; /* Right child */
 				};
struct guess7 *root, *current; /* starting node, walk through the tree*/
struct guess7 one, two, three, four, five, six, seven; /* nodes */
 
 
 
 void create_guess7(void) /* makes the binary tree 1 to 7 */
 {
 	four.num = 4; /* make node four-4 */
 	four.less = &two; 
 	four.more = &six;
 	two.num = 2; /* node two-2*/
 	two.less = &one;
 	two.more = &three;
 	six.num = 6; /*node six-6 */
 	six.less = &five;
 	six.more = &seven;
 	one.num = 1; /*node one-1*/
 	one.less = NULL;
 	one.more = NULL;
 	
 	three.num = 3; /*node three-3*/
 	three.less = NULL;
 	three.more = NULL;
 	
 	five.num =5 ; /*node five-5*/
 	five.less = NULL;
 	five.more = NULL;
 	
 	seven.num = 7; /*node seven-7 */
 	seven.less = NULL;
 	seven.more = NULL;

 	
 	printf("Made your guessing tree.\n\n");
 }
 
 
 
 void main(void)
 {
 	int whichone = 0; /* user menu selection */
 	
 	printf("Think of a number from 1 to 7. Don't tell me yet.\n\n");
 	current = &four; /* start at route for first guess */
 	create_guess7();
 	
 	while(whichone != 3 && current != NULL) /* while not guessed number */
 	{
 		printf("Is you number %i?\n\n", current->num);
 		printf("  1. It is less than %i.\n", current->num);
 		printf("  2. It is more than %i.\n", current->num);
 		printf("  3. You got it!!!\n");
 		printf("\nType 1, 2, or 3 and enter : ");
 		scanf("%d", &whichone);
 		printf("You entered %i.\n", whichone);
 		
 		
 		
 		switch(whichone) /* move down the tree */
 		{
 			case 1:
 					current = current->less; /* go to left child */
 					break;
 			case 2: 
 					current = current->more; /*go to right child */
 					break;
 			case 3: 
 					printf("I got it, %i!\n", current->num);
 					break;
 			default:
 					printf("%i is not a vaild input.\n\n", whichone);
 			
 		}
 	}
 	
 	if(current==NULL) /* went off the end of the list */
 	{
 		printf("Did you get confused? Do you know your numbers?\n\n");
 		
 	}
 	
 }
