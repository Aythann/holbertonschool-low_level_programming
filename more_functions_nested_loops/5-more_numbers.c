#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 *
 * Return: void
 */
void more_numbers(void)
{
	int l;
	int c;

	for (l = 0; l <= 9; l++)
	{
		_putchar('\n');
		for (c = 0 ; c <= 14; c++)
		_putchar('0' + c);
	}
	_putchar('\n');
}
