#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - script 
 * Return: 0.
 */

int main(void)
{
	char n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (n = a; n <= z; n++)
	{
		printf("%c\n", n);
	}
	return (0);

}
