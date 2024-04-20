/* This is a C program by Jacqueline Plata for CS1311 3/5/2024
 *
 * network example for a flashlight model 
 */
 
 
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 
 
 
 struct gizmo{ /* 5 parst for a flashlight */
 				char name[60];
 				struct gizmo *part[3];
 				struct gizmo *contains1;
 				struct gizmo *contains2;	
 };
 struct gizmo *flashlight, *out_case, *battery, *light, *out_switch;
 
 
 
 void create_flash(void) /* make and connect 5 parts of the flashlight */
 {
 	/* get space for the parts */
 	flashlight = malloc(sizeof(struct gizmo));
 	out_case = malloc(sizeof(struct gizmo));
 	battery = malloc(sizeof(struct gizmo));
 	light = malloc(sizeof(struct gizmo));
 	out_switch = malloc(sizeof(struct gizmo));
 	
 	/*put in node names */
 	strcpy(flashlight->name, "flashlight");
 	strcpy(out_case->name, "case");
 	strcpy(battery->name, "battery");
 	strcpy(light->name, "light bulb");
 	strcpy(out_switch->name, "switch");
 	
 	/* connect parts and contains */
 	flashlight->part[0] = out_case;
 	flashlight->part[1] = battery;
 	flashlight->part[2] = light;
 	out_case->part[0] = out_switch;
 	
 	out_case->contains1 = battery;
 	out_case->contains2 = light;
 	
 	/* rest of connections and NULL */
 	flashlight->contains1 = NULL;
 	flashlight->contains2 = NULL;
 	
 	battery->contains1 = NULL;
 	battery->contains2 = NULL;
 	battery->part[0] = NULL;
 	
 	light->contains1 = NULL;
 	light->contains2 = NULL;
 	light->part[0] = NULL;
 	
 	out_switch->contains1 = NULL;
 	out_switch->contains2 = NULL;
 	out_switch->part[0] = NULL;
 	
 	out_case->part[1] = NULL;
 	
 	
 	printf("Your flashlight model is created.\n\n");
 }
 
 
 void print_part_node(struct gizmo *thing) /* print names and connections */
 {
 	int i = 0; /* for network program, plus the extra prints if tn debug mode */
 	
 	printf("A part is %s\n", thing->name);
 	
 	while(i<3 && thing->part[i] != NULL) /* also print the characteristics value */
 	{
 		printf("connects to part: %s\n", thing->part[i]->name); /* if an array; OR just a list of pointers */
 		i++;	
 	}
 	
if(thing->contains1 != NULL)
	printf("contains: %s\n", thing->contains1->name);
	
if(thing->contains2 != NULL)
	printf("contains: %s\n", thing->contains2->name);
	
printf("\n\n");
 	
 }
 
 
 
 void main(void)
 {
 	printf("This program makes and prints a flashlight network.\n\n");
 	
 	create_flash();
 	
 	print_part_node(flashlight);
 	print_part_node(out_case);
 	print_part_node(battery);
 	print_part_node(light);
 	print_part_node(out_switch);
 
 	
 	
 	
 	
 }
