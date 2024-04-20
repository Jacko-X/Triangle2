/* This is a C Program by Jacqueline Plata for CS1311 1/30/2024
 *
 * Money linked list 
 *
 */ 
 
 
 
 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 
 
 
 struct node { 
 				char money[45]; /* Name of denomination */
 				int value; /* number of cents */
 				struct node *next; /* Link to other nodes */
 			 };
struct node m1, m2, m3, m4, m5; /* coin node objects */
struct node *item; /* walk though the list */

 
 
 void main(void)
 {
 	printf("This program shows a linked list of coined values.\n\n\n");
 	
 	/* Fill in the nodes */
 	strcpy(m1.money,"penny");
 	m1.value = 1;
 	m1.next = &m2;
 	
 	strcpy(m2.money,"nickel");
 	m2.value = 5;
 	m2.next = &m3;
 	
 	strcpy(m3.money,"dime");
 	m3.value = 10;
 	m3.next = &m4;
 	
 	strcpy(m4.money,"quarter");
 	m4.value = 25;
 	m4.next = &m5;
 	
 	strcpy(m5.money,"dime");
 	m5.value = 10;
 	m5.next = NULL;
 	
 	/* print out the nodes to ways */
 	printf(" &m1 = %p  m1.next = %p  A %s is worth %i cent.\n", 
 			&m1, m1.next, m1.money, m1.value);
 			
 	printf(" &m2 = %p  m2.next = %p  A %s is worth %i cents.\n", 
 			&m2, m2.next, m2.money, m2.value);
 			
 	printf(" &m3 = %p  m3.next = %p  A %s is worth %i cents.\n", 
 			&m3, m3.next, m3.money, m3.value);
 			
 	printf(" &m4 = %p  m4.next = %p  A %s is worth %i cents.\n", 
 			&m4, m4.next, m4.money, m4.value);
 			
 	printf(" &m5 = %p  m5.next = %p  A %s is worth %i cents.\n\n", 
 			&m5, m5.next, m5.money, m5.value);
 	
 	item = &m1; 
 	
 	while(item != NULL) /* Print each coin node */
 	{
 		printf("item = %p  money = %s  value = %i  next = %p  \n", 
 				item, item->money, item->value, item->next);
 				
 		item = item->next;		
 	}	
 }
