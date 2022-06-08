#include <stdio.h>
void print_alphabet_x10(void);

/**
 *main - check the code
 *
 *Return: Always 0.
 */
int main(void)
{
	int i;


	for (i = 0; i < 10; i++)
	{
		print_alphabet_x10();
	}
	return (0);
}

/**
 *print_alphabet_x10 - prints the alphabet
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
