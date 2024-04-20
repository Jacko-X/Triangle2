/* This is a C program by Jacqueline Plata for CS1311 2/29/2024
 *
 *
 *
 */
 
 
 
 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 
 
 
 struct fam{
 				char name[50];
 				struct fam *kid1;
 				struct fam *kid2;
 				struct fam *kid3;
 				struct fam *childwith;	
 };
 struct fam *root;
 struct fam Aureila, Daniel, Sonya, Nancy, Danny, Carlos, Daren,
 			Marissa, Victoria, Bryan, Jacqueline, Katilyn, Madison;
 
 
 
 
 void print_node(struct fam someone)
 {
 	printf("The person %s ", someone.name);
 	
 	if(someone.childwith != NULL)
 	{
 		printf("has a child or children with %s.\n", someone.childwith->name);	
 	}
 	if(someone.kid1 != NULL)
 	{
 		printf("A kid is %s.\n", someone.kid1->name);	
 	}
 	if(someone.kid2 != NULL)
 	{
 		printf("A kid is %s.\n", someone.kid2->name);	
 	}
 	if(someone.kid3 != NULL)
 	{
 		printf("A kid is %s.\n", someone.kid3->name);	
 	}
 	
 	printf("\n\n");
 }
 
 
 
 
 
 
 
 
 void main(void)
 {
 	printf("This program creates and prints out my family tree.\n\n\n");
 	
 	/* Make family tree */
 	root = &Aureila;
 	strcpy(Aureila.name, "Aureila Salazar");
 	Aureila.childwith = &Daniel;
 	Aureila.kid1 = &Sonya;
 	Aureila.kid2 = &Nancy;
 	Aureila.kid3 = &Danny;
 	
 	strcpy(Daniel.name, "Daniel Salazar");
 	Daniel.childwith = NULL;
 	Daniel.kid1 = NULL;
 	Daniel.kid2 = NULL;
 	Daniel.kid3 = NULL;
 	
 	strcpy(Sonya.name, "Sonya Plata");
 	Sonya.childwith = &Carlos;
 	Sonya.kid1 = &Victoria;
	Sonya.kid2 = &Jacqueline;
	Sonya.kid3 = &Katilyn; 
	
	strcpy(Nancy.name, "Nancy William");
	Nancy.childwith = &Daren;
	Nancy.kid1 = &Marissa;
	Nancy.kid2 = &Bryan;
	Nancy.kid3 = &Madison;
	
	strcpy(Daren.name, "Daren William");
	Daren.childwith = &Daren;
	Daren.kid1 = &Marissa;
	Daren.kid2 = &Bryan;
	Daren.kid3 = &Madison;
	
	strcpy(Danny.name, "Daren William");
	Daren.childwith = NULL;
	Daren.kid1 = NULL;
	Daren.kid2 = NULL;
	Daren.kid3 = NULL;
	
	strcpy(Carlos.name, "Carlos Plata");
	Carlos.childwith = NULL;
	Carlos.kid1 = NULL;
	Carlos.kid2 = NULL;
	Carlos.kid3 = NULL;
	
	strcpy(Marissa.name, "Marissa William");
	Marissa.childwith = NULL;
	Marissa.kid1 = NULL;
	Marissa.kid2 = NULL;
	Marissa.kid3 = NULL; 
	
	strcpy(Bryan.name, "Bryan William");
	Bryan.childwith = NULL;
	Bryan.kid1 = NULL;
	Bryan.kid2 = NULL;
	Bryan.kid3 = NULL; 
	
	strcpy(Madison.name, "Madison William");
	Madison.childwith = NULL;
	Madison.kid1 = NULL;
	Madison.kid2 = NULL;
	Madison.kid3 = NULL; 
	
	strcpy(Victoria.name, "Victoria Plata");
	Victoria.childwith = NULL;
	Victoria.kid1 = NULL;
	Victoria.kid2 = NULL;
	Victoria.kid3 = NULL; 
	
	strcpy(Jacqueline.name, "Jacqueline Plata");
	Jacqueline.childwith = NULL;
	Jacqueline.kid1 = NULL;
	Jacqueline.kid2 = NULL;
	Jacqueline.kid3 = NULL; 
	
	strcpy(Katilyn.name, "Katilyn Plata");
	Katilyn.childwith = NULL;
	Katilyn.kid1 = NULL;
	Katilyn.kid2 = NULL;
	Katilyn.kid3 = NULL; 
 	
 	/*print each node */
 	print_node(Aureila);
 	print_node(Daniel);
 	print_node(Sonya);
 	print_node(Nancy);
 	print_node(Danny);
 	print_node(Carlos);
 	print_node(Daren);
 	print_node(Marissa);
 	print_node(Bryan);
 	print_node(Madison);
 	print_node(Victoria);
 	print_node(Jacqueline);
 	print_node(Katilyn);
 	
 }
