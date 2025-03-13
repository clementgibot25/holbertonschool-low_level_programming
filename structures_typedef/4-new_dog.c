#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to check
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s && s[len])
		len++;
	return (len);
}

/**
 * _strcpy - copies a string to a destination
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog_t structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner's name of the dog
 *
 * Return: a pointer to the new dog_t structure,
 * or NULL if memory allocation fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(_strlen(name) + 1);
	new_dog->owner = malloc(_strlen(owner) + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);

	return (new_dog);
}
