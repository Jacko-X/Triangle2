/* C program by Jacqueline Plata for CS1311 2/1/2024
 *
 * Linked list of things that  want
 */
 
 
 
 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 
 
 
 
 struct item{ /* hold info about things that I want */
 				char name[50];
 				double value;
 				struct item *next;
			};
struct item *start, *ptemp, *current; /* point to places in the list */
 
 
 void main(void)
 {
 	printf("This program shows some things i want.\n\n");
 	
 	current = malloc(sizeof(struct item)); /* create first record */
 	
 	strcpy(current->name, "Japan Trip");
 	current->value = 6100;
 	current->next = NULL;
 	ptemp = current; /* point to last finished item */
 	start = current;
 	
 	current = malloc(sizeof(struct item)); /* create second record */
 	strcpy(current->name, "Pool");
 	current->value = 35000;
 	current->next = NULL;
 	ptemp->next = current; /* point last element to new/next */
 	ptemp=current;
 	
 	current = malloc(sizeof(struct item)); /* create third record */
 	strcpy(current->name, "Louve Trip");
 	current->value = 6000;
 	current->next = NULL;
 	ptemp->next = current; /* point last element to new/next */
 	ptemp=current;
 	
 	current = malloc(sizeof(struct item)); /* create fourth record */
 	strcpy(current->name, "House");
 	current->value = 257628;
 	current->next = NULL;
 	ptemp->next = current; /* point last element to new/next */
 	ptemp=current;
 	
 	current = malloc(sizeof(struct item)); /* create five record */
 	strcpy(current->name, "Oculus");
 	current->value = 299;
 	current->next = NULL;
 	ptemp->next = current; 
 	
 	current = malloc(sizeof(struct item)); /* create six record */
 	strcpy(current->name, "Playstation 5");
 	current->value = 500;
 	current->next = NULL;
 	ptemp->next = current; 
 	
 	
 	
 	
 	
 	
 	current = start;
 	printf("\n  ITEM NAME              $VALUE\n\n");
 	while(current != NULL) /* print each record */
 	{
 		printf("  %-15s        $%.0lf\n", current->name, current->value);
 		current = current->next; /* Go to the next record */
 		
 		
 	}
 	
 }
