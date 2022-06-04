#include <stdio.h>
#include <stdlib.h>

/**
 *main- prints out posible combinations of two digits
 *
 *Return: 0 when executed ok
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
		}
	}
	return (0);
}
