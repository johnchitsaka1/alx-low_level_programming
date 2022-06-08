#include <stdio.h>
void print_alphabet(void);

/**
 *main - check the code
 *
 *Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 *print_alphabet - prints the alphabet in lowercase
 *
 *Return: void
 */
void print_alphabet(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
