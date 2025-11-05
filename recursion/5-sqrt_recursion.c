#include "main.h"

/**
 * _sqrt_helper - recursive helper to find square root
 * @n: number to evaluate
 * @i: current guess
 *
 * Return: square root or -1 if not found
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}
