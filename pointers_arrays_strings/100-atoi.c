#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string to be converted
 *
 * Description: Takes into account all '+' and '-' signs before the number.
 * If there are no numbers in the string, returns 0.
 *
 * Return: The converted integer value
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int started = 0;
	int result = 0;

	if (!s)
		return (0);

	while (s[i] != '\0' && !started)
	{
		if (s[i] == '-')
			sign = -sign;
		else if (s[i] == '+')
		else if (s[i] >= '0' && s[i] <= '9')
			started = 1;
		else
		if (!started)
			i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';
		result = result * 10 + digit;
		i++;
	}

	return (sign * result);
}
