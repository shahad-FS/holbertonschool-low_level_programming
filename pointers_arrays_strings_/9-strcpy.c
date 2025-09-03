#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the null byte
 *           (\0), to the buffer pointed to by dest
 * @dest: pointer to the buffer where the string will be copied
 * @src: string to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
