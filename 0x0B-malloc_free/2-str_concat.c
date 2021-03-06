#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - joins two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to resultant string
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int s1len = 0, s2len = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
	{
		s1len++, i++;
	}
	while (*(s2 + j))
	{
		s2len++, j++;
	}
	s2len++;

	concat = malloc(sizeof(char) * (s1len + s2len));

	if (concat == NULL)
	{
		return (NULL);
	}

	i = 0, j = 0;
	while (i < s1len)
	{
		*(concat + i) = *(s1 + i);
		i++;
	}
	while (j < s2len)
	{
		*(concat + i) = *(s2 + j);
		i++, j++;
	}

	return (concat);
}
