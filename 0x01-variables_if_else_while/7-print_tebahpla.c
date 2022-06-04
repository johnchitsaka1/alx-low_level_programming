#include <stdio.h>
#include <stdlib.h>

/**
 *main- prints alphabet in reverse order
 *
 *Return: 0 when program executed ok
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
