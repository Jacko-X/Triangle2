void CMain(void)
{
	int b;
	
	printf("\n*** Main ***\n\n"

	"The main function is the entry point for the program to execute, it also keeps the program\n"
	"organized by knowing where it starts. This function holds the program or can calls other\n"
	"functions for the program to execute. It can also return values and pass in inputs in the\n"
	"main parameters to learn more about this see main parameters.\n\n"

	"The syntax of Main is\n" 
	"     type main(input or void)\n"
    "     {\n"
    "          printf(\"This is the syntax for Main!\");\n"
    "     }\n\n"
    
    "To learn more about input to main see Main Parameters.\n\n"

	"Do you want to see an example type y for yes?\n");
	
	b = getchar();

	if(b == 'y' || b == 'Y')
	{
		printf("\n*** Main Examples ***\n\n"

		"     #include <stdio.h>\n\n"

		"          void main(void)\n"
     	"          {\n"
        "               printf(\"Hello!\");\n"
     	"          }\n\n"

	"The program above is a main function to start the execution of the code with no parameter\n" 
	"passed in and a void return type. Inside of the main function is a print statement that\n"
	"prints Hello. The #include <stdio.h> is needed to use a print statement.\n\n"

	"     int main(void)\n"
    "     {\n"
    "          int x = 3;\n\n"
    
    "          return x;\n"
    "     }\n\n"

	"The program above is a main function with a return type of int so the return value of 3\n" 
	"indicated that the program was completed. No arguments are passed in but has a return value.\n");
	}
}





