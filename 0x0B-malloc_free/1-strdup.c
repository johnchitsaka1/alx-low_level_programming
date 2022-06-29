#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string in allocated memory
*/

char *_strdup(char *str)
{
	char *strCopy;
	int i = 0;
	int length = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		length++, i++;
	length++;

	strCopy = malloc(sizeof(char) * length);

	if (strCopy == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < length)
	{
		*(strCopy + i) = *(str + i);
		i++;
	}

	return (strCopy);
}
