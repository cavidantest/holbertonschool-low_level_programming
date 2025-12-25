#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to modify
 *
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	int i, j;
	int new_word;
	char sep[] = " \t\n,;.!?\"(){}";

	new_word = 1;
	i = 0;

	while (str[i] != '\0')
	{
		if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - ('a' - 'A');

		new_word = 0;
		j = 0;
		while (sep[j] != '\0')
		{
			if (str[i] == sep[j])
			{
				new_word = 1;
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
