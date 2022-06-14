#include "main.h"
/**
 *print_rev - prints string in reverse
 *@s: string to be reversed
 *@i: iterates through loop
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	while (i >= 0)
	{
		s--;
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
