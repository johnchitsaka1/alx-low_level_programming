#include <stdio.h>
#include <stdlib.h>

/**
 *main- prints all gex digits
 *
 *Return: 0 when executed ok
 */
int main(void)
{
	int i;
	char c;

	for (i = 48; i <= 58; i++)
	{
		putchar(i);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
