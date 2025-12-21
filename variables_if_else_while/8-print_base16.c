#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int n;
	char c;

	for (n = 0; n <= 9; n++)
		putchar('0' + n);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
