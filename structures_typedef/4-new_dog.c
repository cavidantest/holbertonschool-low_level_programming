#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns length of a string
 * @s: string
 *
 * Return: length
 */
static int _strlen(char *s)
{
	int len;

	if (s == NULL)
		return (0);

	len = 0;
	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strcpy - copies src into dest (including '\0')
 * @dest: destination
 * @src: source
 */
static void _strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

/**
 * new_dog - creates a new dog
 * @name: dog's name (copied)
 * @age: dog's age
 * @owner: dog's owner (copied)
 *
 * Return: pointer to new dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int name_len, owner_len;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	name_len = _strlen(name);
	d->name = malloc(sizeof(char) * (name_len + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(d->name, name);

	owner_len = _strlen(owner);
	d->owner = malloc(sizeof(char) * (owner_len + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	_strcpy(d->owner, owner);

	d->age = age;

	return (d);
}
