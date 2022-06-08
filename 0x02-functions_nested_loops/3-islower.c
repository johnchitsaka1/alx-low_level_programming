#include <stdio.h>
int _islower(int c);
/**
 *main-check the code
 *
 *Return: Always zero
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 *_islower- checks if input is lower case
 *parameters@ c - used as place holder
 *Return: 1 if letter is in lower case, 0 otherwise
 */
int _islower(int c)
{
	int i;

	i = c;
	if ((i > 96) && (i < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

