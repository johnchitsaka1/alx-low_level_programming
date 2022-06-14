/**
 *_strlen - calculates length of a string
 *@s: first character of string
 *
 *Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
