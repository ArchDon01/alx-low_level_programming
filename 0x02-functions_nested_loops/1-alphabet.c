#include "main.h"
/**
 * main - print alphabet
 */
int main(void)
{
	print_alphabet(void);
	return 0;
}

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++);
	putchar(letter);
	putchar('\n');
}

