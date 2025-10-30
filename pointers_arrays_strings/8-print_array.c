#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to the first element of the array
 * @n: Number of elements to print
 *
 * Description: Numbers are separated by a comma and a space.
 * A newline is printed after the last element.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}
