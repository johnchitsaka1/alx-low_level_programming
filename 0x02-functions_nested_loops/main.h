#ifndef _MAIN_H_
#define _MAIN_H_
#endif
#include <stdio.h>
#include <stdlib.h>

/**
 *_putchar - prints char c to output
 *@c: character input
 *
 *Return: 1 success, -1 error
 */
int _putchar(char c)
{
	char c2;

	c2 = c;
	putchar(c2);
	return (0);
}

/**
 *print_alphabet- prints alphabet in lower case
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

/**
 *print_alphabet_x10 - print lowercase letters of the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int j;
	int k;

	for (j = 0; j < 10; j++)
	{
		for (k = 97; k < 123; k++)
		{
			_putchar(k);
		}
	}
}

/**
 *_islower- checks if input is lower case character of the alphabet
 *@c: character to be checked
 *
 *Return: 1 is lower case character, 0 otherwise
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

/**
 *_isalpha - checks to see if input is a letter in the alphabet
 *@c: character to be checked
 *
 *Return: 1 is part of the alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	int i;

	i = c;
	if(((i > 64) && (i < 91)) || ((i > 96) && (i < 123)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 *print_sign - prints the sign of a number to std out
 *@n: number whose sign is to be evaluated
 *
 *Return: 1 if greater than 0, 0 if 0, -1 if less than zero
 */
int print_sign(int n)
{
	int i;

	i = n;
	if (i > 0)
	{
		putchar('+');
		return (1);
	}
	else if (i < 0)
	{
		putchar('-');
		return (-1);
	}
	else if (i == 0)
	{
		putchar('0');
		return (0);
	}
}

/**
