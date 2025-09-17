/*
 * File: 4-new_dog.c
 */

#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/*
 * _strlen - Find the length of a string
 * @str: The string to be measured
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 * terminating null byte, to a buffer pointed to by dest
 * @dest: The buffer storing the string copy
 * @src: The source string
 *
 * Return: The pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}

/***
 *new_dog - Create a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: The new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	dog_ = malloc(sizeof(dog_t));

	if (dog_ == NULL)
	{
		return (NULL);
	}

	dog_->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (dog_->name == NULL)
	{
		free(dog_->name);
		return (NULL);
	}

	dog_->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (dog_->owner == NULL)
	{
		free(dog_->name);
		free(dog_);
		return (NULL);
	}

	dog_->name = _strcopy(dog_->name, name);
	dog_->age = age;
	dog_->owner = _strcopy(dog_->owner, owner);

	return (dog_);
}
