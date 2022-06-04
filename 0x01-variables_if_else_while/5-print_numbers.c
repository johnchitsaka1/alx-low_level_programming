#include <stdio.h>
#include <stdlib.h>

/**
 *main- prints numbers from zero to 9
 *
 *Return: 0 if program executed ok
 */
int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
}
