#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a number is 0, positive or negative
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is postive\n", n);
	}
	
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
