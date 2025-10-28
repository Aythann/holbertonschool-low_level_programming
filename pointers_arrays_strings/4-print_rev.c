#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: pointer to the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	char *lettre = s;

	while (*lettre != '\0')
	{
		lettre++;
	}

	while (lettre > s)
	{
		lettre--;
		_putchar(*lettre); 
	}

	_putchar('\n');
}
