#include "main.h"

/**
 * rev_string - reverse a string in place
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char tmp;

	while (s[len])
		len++;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}

