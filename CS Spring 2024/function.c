void function(void)
{
char answer;

printf("\n***Function***\n\n"

"Functions are blocks of code aimed to complete a specific task or group of related tasks.\n"
"Functions are used to break down a program into smaller, manageable parts. So each function\n" 
"can be developed, tested and debugged independently, which will overall make the program\n" 
"more organized and easier to understand.\n"  
"Functions are located above main and they can be used again or called multiple times from\n" 
"different places in the code the parameters are also passed in if the function needs it.\n" 
"Functions can go after main if prototypes are declared.\n\n" 

"The syntax of Functions is\n"
"     type function_name(type name, type name, . . .)\n"
"     {\n"
"          //body of the function\n" 
"     }\n\n"
	
"The syntax of calling Functions in main\n"
"     function_name(name, name);\n\n"
"OR\n\n"
"The syntax of calling Functions in main if a value is returned.\n"
"     variable = function_name(name);\n\n"

"Do you want to see examples type y for yes?\n");

scanf("%c", &answer);

if(answer == 'y' || answer == 'Y')
{
	printf("\n***Function Examples***\n\n"

	"void function_1(void) // Function created\n"
    "{\n"
          "printf(""Have a nice day!"");\n" 
    "}\n\n"

	"The example above has NO parameters passed in and NO values returned.\n"
	"The program above calls the function_1 to print ""Have a nice day!"".\n\n"

	"void function_11(int a, int b) // Function created\n"
    "{\n"
    "printf(""%i + %i = %i"", a, b, a+b);\n"
    "}\n\n"

	"void main(void)\n"
    "{\n"
    "function_11(10,4); // Function call\n"
    "}\n\n"

	"In the example above there are parameters passed in from main to the function 10 and 4 which\n"
	"is then stored in the variables a and b in the function. The function then executes the code\n"
	"in the function using the values in a and b.This program calls the function_11 to get two\n"
	"numbers from the user then prints out those numbers added together.\n\n"

	"int function_2(void) // Function created\n"
    "{\n"
    "int n;\n\n"
          
    "printf(""Enter a integer: "");\n"
    "scanf(""%d"", &n);\n\n"
          
    "return n;\n"
    "}\n\n"

	"void main(void)\n"
    "{\n"
    "int a;\n\n"

    "a = function_2(); // Function call\n"
    "printf(""The number you entered is %i.\n\n"", a);\n"
    "}\n\n"

	"The example above has No parameters passed in but HAS values returned. \n"
	"The program above uses calls the function_2 to ask the user for a number, \n"
	"scans in that number then sends it to main. \n"
	"The returned value from function_2 is stored in the variable a which main prints out.\n\n"

	"double function_4(double a, double b, double c)\n"
    "{\n"
    "double d;\n\n"

    "d = (a + c) * b;\n\n"

    "return d;\n"
    "}\n\n"

	"void main(void)\n"
    "{\n"
    "printf(""function_4 returns (10 + 4) * 2 which equals %lf"",function1(10,2,4));\n"
    "}\n\n"

	"The example above has Parameters passed in and has values returned.\n"
	"This program uses a function to pass in parameters which are the numbers 10, 2, and 4 and\n"
	"stores them in the variables a, b, and c in function_4. In function_4 a and c are added\n"
	"together then multiplied by b which equals d. d is then returned to main where it is printed out.\n");
}
}







