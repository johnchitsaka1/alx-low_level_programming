#include <stdio.h>
#include <stdlib.h>

/**
 *main- prints alphabet omitting q and e
 *
 *Return: 0 if program executed ok
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if ((c == 'q') || (c == 'e'))
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
