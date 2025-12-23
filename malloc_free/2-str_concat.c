#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into newly allocated memory
 * @s1: first string (can be NULL)
 * @s2: second string (can be NULL)
 *
 * Return: pointer to new string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	for (j = 0; j < len2; j++)
		s[i + j] = s2[j];

	s[i + j] = '\0';

	return (s);
}
