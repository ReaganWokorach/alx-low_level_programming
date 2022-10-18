#include <stdio.h>

#include <ctype.h>
/**
 * main - Print _putchar followed by a new child
 *
 * Return: 0
*/

int main(void)
{
	char var;
	printf ( "This is any char from the keyboard ");
	putchar ('\n');
	var = getchar();
	  if (islower(var))
		    {
			      putchar (toupper(var));
		    }
	  else
		    {
			     putchar (tolower(var));
			       }
	   return (0);
}
