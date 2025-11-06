#include "main.h"

/**
 * _check_prime - teste récursivement si un nombre est premier
 * @n: nombre à tester
 * @i: diviseur courant
 *
 * Return: 1 si premier, 0 sinon
 */
int _check_prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (_check_prime(n, i + 1));
}

/**
 * is_prime_number - vérifie si un nombre est premier
 * @n: nombre à tester
 *
 * Return: 1 si premier, 0 sinon
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (_check_prime(n, 2));
}
