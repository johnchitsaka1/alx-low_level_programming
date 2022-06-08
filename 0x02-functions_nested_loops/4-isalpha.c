#include <stdio.h>
int _isalpha(int c);
/**
 *main - check the code
 *
 *Return: Always zero
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	putchar(r + '0');
	r = _isalpha('o');
	putchar(r + '0');
	r = _isalpha(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}

/**
 *_isalpha - tests input to see if it is part of the alphabet
 *@i-
 *Return: 1 when input is a letter , 0 otherwise
 */
int _isalpha(int c)
{
	int i;

	i = c;
	if (((i > 64) && (i < 91)) || ((i > 96) && (i < 123)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}