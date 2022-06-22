#include "main.h"

/**
* _strspn - A function that gets the lenght of a prefix string
* @s: source string
* @accept: searching string
* Return: new string
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + j) == *(accept + i))
				break;
		}
	}
}
