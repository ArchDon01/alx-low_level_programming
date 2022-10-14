#include <stdio.h>
/**
 * main - entry point of the program.
 * Return: returns 0.
 */
int main(void)
{
	printf("size of a char: %id byte(s)\n", sizeof(char));
	printf("size of an int: %id byte(s)\n", sizeof(int));
	printf("size of a long int: %id byte(s)\n", sizeof(long int));
	printf("size of a long long int: %id byte(s)\n", sizeof(long long int));
	printf("size of a float: %id byte(s)\n", sizeof(float));
	return (0);
}
