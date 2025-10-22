#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 *
 * Return: Always void
 */
void print_alphabet_x10(void)

{
	int l;
	char n = 'a';

	for (l = 0; l < 10; l++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
