#include <stdio.h>
/**
 * main - entry point of the program.
 * Return: returns 0.
 */
int main(void)
{
	printf("size of char: %ld byte(S)\n", sizeof(char));
	printf("size of int: %ld byte(S)\n", sizeof(int));
	printf("size of long int: %ld byte(S)\n", sizeof(long int));
	printf("size of long long int: %ld byte(S)\n", sizeof(long long int));
	printf("size of float: %ld byte(S)\n", sizeof(float));
	return (0);
}
