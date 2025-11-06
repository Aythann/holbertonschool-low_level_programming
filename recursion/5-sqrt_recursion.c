#include "main.h"

/**
 * _sqrt_helper - aide récursive pour trouver la racine carrée
 * @n: nombre dont on cherche la racine
 * @i: essai courant
 *
 * Return: racine carrée naturelle ou -1 si inexistante
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - retourne la racine carrée naturelle d’un nombre
 * @n: nombre à évaluer
 *
 * Return: racine carrée naturelle ou -1 si inexistante
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
