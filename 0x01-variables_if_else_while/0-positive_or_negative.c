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

	printf("n ");
	scanf("%d", &n);
	printf("n %d\n", n);

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
