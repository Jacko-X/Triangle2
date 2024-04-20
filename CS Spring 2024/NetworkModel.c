/* This is a C program by Jacqueline Plata for CS1311 04/10/2024

	Creates a network that models a Microwave with 10 nodes.
	Has two types of connections attached and inside with at 
	least one connection from each object. Have at least one 
	loop in the graph of the objects. Have a name of the node 
	field and one other field that is the color characteristic 
	of the itam. Create the network and then print out each 
	object one at a time showing the things one level deep 
	connected to it.
  
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
#include<process.h>



enum test{no, yes};/* In testing mode or not */
enum test testing = no; /* if yes, print extra information */



struct Microwave{
				char name[50]; /* name of part */
				char color[50]; /* color of part */
				struct Microwave *attached; /* pointer to part attached */
				struct Microwave *inside; /* pointer to part inside */
};
struct Microwave CookingCavity, Door, ControlPanel, Waveguide, CoolingFan,
				Turntable, Magetron, VoltageTransformer, PowerCord; /* Nodes */
		
				

/* General Function to create a node */
void Add_Node(struct Microwave *a, char b[], char c[], struct Microwave *d, struct Microwave *e)
{
	/* Put in node names */
	strcpy(a->name, b);
	
	/* Assign Characteristic */
	strcpy(a->color, c);
	
	/* Assign Inside Address */
	a->inside = d;
	
	/*Assign Attached Address */
	a->attached = e;
}



void Create_Network() /* Creating the network, contains information for the node */
{
	Add_Node(&CookingCavity, "CookingCavity", "White", NULL, &Door); /* Cooking Cavity Node */
	
	Add_Node(&Door, "Door", "Black", NULL, &ControlPanel); /* Door Node */
	
	Add_Node(&ControlPanel, "ControlPanel", "Black", NULL, NULL); /* Control Panel Node */

	Add_Node(&Waveguide, "Waveguide", "Silver", &CookingCavity, NULL); /* Waveguide Node */
	
	Add_Node(&CoolingFan, "CoolingFan", "Silver", &CookingCavity, NULL); /* Cooling Fan Node */
	
	Add_Node(&Turntable, "Turntable", "Clear", &CookingCavity, NULL); /* Turntable Node */
	
	Add_Node(&Magetron, "Magetron", "Silver", &CookingCavity, NULL); /* Magetron Node */
	
	/* Voltage Transformer Node */
	Add_Node(&VoltageTransformer, "VoltageTransformer", "Silver", &CookingCavity, &ControlPanel); 
	
	Add_Node(&PowerCord, "PowerCord", "Black", &VoltageTransformer, NULL); /* Power Cord Node */
	
	
	
	if(testing == yes) /* If in testing mode */
	{
		printf("Microwave network is created!\n\n");
	}
}



void Print_Node(struct Microwave *thing)  /*prints names and connections of each node*/
{
	printf("Name of part is: %s\n", thing->name); 
	
	printf("Color of part is: %s\n", thing->color);
 	
 	
 	
	if(thing->inside != NULL) /* Check if node has a part inside */
	{
		printf("Inside: %s\n", thing->inside->name);
	}
	
	
	
		if(thing->attached != NULL) /* Check if node has a part attached */
	{
		printf("Attached: %s\n", thing->attached->name);
	}	
	printf("\n\n");	
 }
	

	
void main(int argc, char *argv[]) /* takes in inputs to main */
{	   
   	int i = 0; /* loop counter */
	
	
	
	if(argc > 1 && strcmp(argv[1], "debug") == 0) /* debug sent in */
	{
		testing = yes; /* Changes to testing mode */
		printf("\nWe are in testing mode \n");
		printf("\nargc = %i \n", argc);
	}
	else
	{
		printf("\nWe are in a non-testing mode.\n");
	}
	
	
	
	if(testing == yes) /* If in testing mode */
	{
		printf("Testing = %i, &testing = %p \n", testing, &testing);

		while(i <= argc) /* to print all words in the command line */
		{
			printf("element %i is %s \n", i, argv[i]);
			i = i + 1;
		}
		
		
		
		/* Prints the addresses of the nodes */
		printf("The address of Cooking Cavity: %p\n", &CookingCavity); 
		printf("The address of Door: %p\n", &Door);
		printf("The address of Control Panel: %p\n", &ControlPanel);
		printf("The address of Waveguide: %p\n", &Waveguide);
		printf("The address of Cooling Fan: %p\n", &CoolingFan);
		printf("The address of Turntable: %p\n", &Turntable);
		printf("The address of Magetron: %p\n", &Magetron);
		printf("The address of VoltageTransformer: %p\n", &VoltageTransformer);
		printf("The address of PowerCord: %p\n", &PowerCord);
	}
	
	
	
	printf("\n\n\n		Microwave Network\n\n");
	
	printf("This program prints a model of a Microwave with 9 nodes.\n"
			"Has two types of connections 'attached' and 'inside' with at\n"
			"least one connection from each object. Has at least one\n"
			"loop in the graph of the objects. Has a name of the node\n"
			"field and one other field that is the color characteristic\n"
			"of the itam. Create the network and then print out each\n"
			"object one at a time showing the things one level deep\n"
			"connected to it.\n\n\n");

	
	
	Create_Network(); /* Creates Network */
	
	
	
	Print_Node(&CookingCavity); /* Prints Cooking Cavity Node */
	Print_Node(&Door); /* Prints Door Node */
	Print_Node(&ControlPanel); /* Prints Control Panel Node */
	Print_Node(&Waveguide); /* Prints Waveguide Node */
	Print_Node(&CoolingFan); /* Prints Cooling Fan Node */
	Print_Node(&Turntable); /* Prints Turntable Node */
	Print_Node(&Magetron); /* Prints Magetron Node */
	Print_Node(&VoltageTransformer); /* Prints Voltage Transformer Node */
	Print_Node(&PowerCord); /* Prints Power Cord Node */
	  
	  
	  
	printf("			Microwave			\n");
	
	printf(" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n"
           "|                                                       |\n"	
           "|   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _     _ _ _ _ _ _ _   |\n"
           "|   |                               |   | _________ |   |\n"
           "|   |                               |   |[_1_:_0_0_]|   |\n"
           "|   |        ~ ~ ~ ~ ~ ~ ~          |   |  _________|   |\n"
           "|   |      /               \\        |   | |1_|2_|3_||   |\n"
           "|   |     (                 )       |   | |4_|5_|6_||   |\n"
           "|   |      \\_ _ _ _ _ _ _ _/        |   | |7_|8_|9_||   |\n"
           "|   | _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |   | start stop|   |\n"
           "|                                         - - - - - -   |\n"
           "|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|\n");
}
	
	
