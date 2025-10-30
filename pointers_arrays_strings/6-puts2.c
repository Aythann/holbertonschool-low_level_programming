#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first one
 * @str: Pointer to the string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	if (!str)
	{
		_putchar('\n');
		return;
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		if (str[i + 1] == '\0')
			break;
		i += 2;
	}
	_putchar('\n');
}
