#ifndef _MAIN_H_
#define _MAIN_H_

/**
 *_putchar - prints a single char to std out
 *@c: character to print
 *
 *Return:On success.
 *On errror, -1 is returned, and erno is set approprietly
 */
int _putchar(char c);

/**
 *reset_to_98 - resets an int value to 98 via a pointer
 *@n:pointer o change int value
 */
void reset_to_98(int *n);

/**
 *swap_int - swaps values of two integers
 *@a: first value
 *@b: second value
 */
void swap_int(int *a, int *b);

/**
 *_strlen - calculates the length of a string
 *@s: pointer to first character
 *
 *Return: length of string
 */
int _strlen(char *s);

/**
 *_puts - prints a string
 *@str: string to print
 */
void _puts(char *str);

#endif
