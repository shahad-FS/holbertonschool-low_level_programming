#include "main.h"

/**
 * puts2 - print one char out of two of a string 
 * @str: pointer to the string 
 *
 * Return : void 
 */
void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index += 2;
	}
	_putchar('\n');
}
