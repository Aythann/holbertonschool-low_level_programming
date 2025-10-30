#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: Pointer to the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, start, i;

	if (!str)
	{
		_putchar('\n');
		return;
	}

	while (str[len] != '\0')
		len++;

	start = (len % 2 == 0) ? (len / 2) : ((len + 1) / 2);

	for (i = start; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
