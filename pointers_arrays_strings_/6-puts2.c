#include "main.h"

/**
 * puts2 - print one char out of two of a string
 * @str: pointer to the string
 *
 * Return : void
 */
void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
	{
		len++;
	}
	for (index = 0; index < len; index += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
