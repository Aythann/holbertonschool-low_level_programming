#include "main.h"

/**
 * check_prime - helper function to check divisibility
 * @n: number to test
 * @i: divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}
