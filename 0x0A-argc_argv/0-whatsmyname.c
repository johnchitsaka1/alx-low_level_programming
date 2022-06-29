#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments passed to main
 * @argv: array of arguments passed to main
 *
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
