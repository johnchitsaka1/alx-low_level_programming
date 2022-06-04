#include <stdio.h>
#include <stdlib.h>

/**
 *main- prints out numbers from 0 to 9
 *
 *Return: 0 if program executed ok
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
