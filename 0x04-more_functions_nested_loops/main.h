#ifndef _MAIN_H_
#define _MAIN_H_

/**
 *_putchar - prints a character to std out
 *
 */
void _putchar(int i);

/**
 *isupper - checks for uppercase char
 *@c: char to test
 *Return: 1 if uppercaase, 0 otherwise
 */
int _isupper(int c)
{
	int i;

	i = c;
	if ((i > 64) && (i < 91))
	{
		return (1);
	}
	else
	{
		return (1);
	}
}

/**
 *_isdigit -- checks for a digit
 *@c: test charectar
 *Return: 1 if  is a digit , 0 otherwise
 */
int _isdigit(int c)
{
	int i;

	i = c;
	if ((i > 47) && (i < 58))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 *mul - multiplies 2 numbers
 *@a: first operand
 *@b: second operand
 *Return: result
 */
int mul(int a, int b)
{
	int a1;
	int b1;
	int c;

	a1 = a;
	b1 = b;
	c = a1 * b1;
	return (c);
}

/**
 *print_numbers - prints the numbers from 0 to 9
 *@i: interger used to increment from 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10, i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}

/**
 *print_most_numbers - print numbers 0 to 9 skipping 2 and 4
 *@i: number which increments by 1 ever iteration
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
		if ((i == 2) || (i == 4))
		{
			continue;
		}
	}
	_putchar('\n');
}

/**
 *more_numbers -prints the numbers 0 - 14 10 times
 */
void more_numbers(void)
{
	int i;
	int k;
	int j;
	int a;

	for (i = 0; i < 10; i++)
	{
		if (j == 0)
		{
			for (k = 0; k < 10; k++)
			{
				_putchar(k + '0');
			}
			j = 1;
		}
		if (j == 1)
		{
			for (t = 0; t < 5)
			{
				_putchar(1 + '0');
				_putchar(t);
			}
			j = 0;
		}
		_putchar('\n');
	}
}

/**
 *print_line - prints ASCII val 95, '_' n times on the terminal making a lin
 *@n: length of the line
 *@k: iteration integer
 */
void print_line(int n)
{
	int i;
	int k;

	i = n;
	if (i != 0)
	{
		for (k = 0; k <= i; k++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
/**
 *print_diagonal - prints a diagonal line on the screen
 *@n: length of the line
 */
void print_diagonal(int n)
{
	int i;
	int k;
6
	i = n;
	for (k = 0; k <= i; k++)
	{
		/* '\' - ASCII */
		_putchar(92);
		_putchar('\n');
		/* '\t' - ASCII */
		_putchar(9);
	}
}
/**
 *print_square - prints a square size n to stdout
 *@size: square size
 */
void print_square(int size)
{
	int a;
	int k;

	a = size;
	for (k = 0; k <= a; k++)
	{
		for (k = 0; k <= a; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

/**
 *fizz_buzz - prints a list substitituting multiples of 3 and multiples of 5
 *@a: place holder of the first digitt in 100
 *@b: place holder of the second digit in 100
 *@c: place holder of the third digit in 100
 */
void fizz_buzz(void)
{
	int a;
	int b;
	int c;
	int k;

	k = 1;
	for (a = 0; a < 2; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				if (((k % 3) == 0) && ((k % 5) == 0))
				{
					_putchar('F');
					_putchar('i');
					_putchar('z');
					_putchar('z');
					_putchar('B');
					_putchar('u');
					_putchar('z');
					_putchar('z');
					_putchar(' ');
				}
				else if (((k % 3) == 0) && ((k % 5) != 0))
				{
					-putchar('F');
					_putchar('i');
					_putchar('z');
					_putchar('z');
					_putchar(' ');
				}
				else if (((k % 3) != 0) && ((k % 5) != 0))
				{
					_putchar('B');
					_putchar('u');
					_putchar('z');
					_putchar('z');
					_putchar(' ');
				}
				else
				{
					if (a < 1)
					{
						if (b < 1)
							{
								_putchar(c + '0');
							}
							else
							{
								_putchar(b + '0');
								_putchar(c + '0');
								_putchar(' ');
							}
						else
						{
							_putchar(a + '0');
							_putchar(b + '0');
							_putchar(c + '0');
					}
				}
		}
	}
}

/**
 *print_triangle - prinf triangle to std out
 *@size: size of the triangle
 */
void print_triangle(int size)
{
	int r;
	int c;
	int b;
	int rs;
	int t;

	r = size;
	b = 1;
	for (rs = 0; rs < r; rs++)
	{
		for (c = 0; c < (r - b); c++)
		{
			_putchar('\t');
		}
		for (t = 0; t < b; t++)
		{
			_putchar('#');
		}
		b++;
		_putchar('\n');
	}
}

#endif
