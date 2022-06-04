#include <stdio.h>
#include <stdlib>

/**
 *main- prints out the alphabet in lower case
 *
 *Return: 0 if program executed ok
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
