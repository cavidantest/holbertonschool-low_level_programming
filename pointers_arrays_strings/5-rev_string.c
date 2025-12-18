#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i, len;
	char tmp;

	len = 0;
	while (s[len] != '\0')
		len++;

	i = 0;
	while (i < len / 2)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
		i++;
	}
}
