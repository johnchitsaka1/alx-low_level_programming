#ifndef _MAIN_H_
#define _MAIN_H_
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
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
#endif
