#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: pointer to s
 */
char *leet(char *s)
{
	int i, j;
	char from[] = "aAeEoOtTlL";
	char to[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; from[j] != '\0'; j++)
		{
			if (s[i] == from[j])
				s[i] = to[j];
		}
	}
	return (s);
}
