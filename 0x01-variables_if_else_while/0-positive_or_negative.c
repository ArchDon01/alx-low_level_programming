#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print number
 * Return: return 0.
 */

int main(void)
{
	int n;

	printf("The number");
	scanf("%d", &n);

	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}

	return (0);
}
