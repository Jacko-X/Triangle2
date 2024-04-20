 /* This is a C program for CS1311 by Jacqueline Plata 04/02/2024
 
 	Play with system and call other programs 
 */
 
 
 
 
 #include<stdio.h>
 #include<process.h>
 
 
 void main(void)
 {
 	printf("Program to play with system calls. \n\n");
 	
 	system("dir");
 	system("dir *.exe");
 	system("calc.exe");
 	system("Lottery.exe");
 	system("notepad");
 	
 	//system("network.exe debug 12345");	
 }
