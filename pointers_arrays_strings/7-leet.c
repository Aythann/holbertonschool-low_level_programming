#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: pointer to the resulting string
 */
char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char leet_code[] = "4433007711";
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = leet_code[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
