#include <stdio.h>
#include <stdlib.h>

/**
 *main- prints all possible single digit combinationss
 *
 *Return: 0 when program executed ok
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
