/* This is a C program by Jacqueline Plata for CS1311 04/02/2024

	Creates a network that models a Microwave with 10 nodes.
	Has two types of connections attached and inside with at 
	least one connection from each object. Have at least one 
	loop in the graph of the objects. Have a name of the node 
	field and one other field that is the color characteristic 
	of the itam. Create the network and then print out each 
	object one at a time showing the things one level deep 
	connected to it.
*/




#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<process.h>



struct Micro{
				char name[50];
				char color[50];
				struct Micro *attached;
				struct Micro *inside;
};
struct Micro *Microwave, *CookingCavity, *Door, *ControlPanel, *Waveguide, *CoolingFan,
				*Turntable, *Magetron, *VoltageTransformer, *PowerCord;
				

void Create_Microwave() /* make and connect 10 parts of a Microwave */
{
	
	
	
}

	/* Get space for the parts */
	Microwave = malloc(sizeof(struct Micro));
	CookingCavity = malloc(sizeof(struct Micro));
	Door = malloc(sizeof(struct Micro));
	ControlPanel = malloc(sizeof(struct Micro));
	Waveguide = malloc(sizeof(struct Micro));
	CoolingFan = malloc(sizeof(struct Micro));
	Turntable = malloc(sizeof(struct Micro));
	Magetron = malloc(sizeof(struct Micro));
	VoltageTransformer = malloc(sizeof(struct Micro));
	PowerCord = malloc(sizeof(struct Micro));
	
	/* Put in node names */
	strcpy(Microwave->name, "Microwave");
	strcpy(CookingCavity->name, "CookingCavity");
	strcpy(Door->name, "Door");
	strcpy(ControlPanel->name, "ControlPanel");
	strcpy(Waveguide->name, "Waveguide");
	strcpy(CoolingFan->name, "CoolingFan");
	strcpy(Turntable->name, "Turntable");
	strcpy(Magetron->name, "Magetron");
	strcpy(VoltageTransformer->name, "VoltageTransformer");
	strcpy(PowerCord->name, "PowerCord");

void main(void)
{
	
	
}
	
	
