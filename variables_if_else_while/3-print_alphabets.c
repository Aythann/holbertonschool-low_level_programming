#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
    char n;

    n = 'a';
        
    while (n <= 'z')
    {
        putchar(n);
        n++;
    }
    n = 'A';
    while (n <= 'Z')
    {
        putchar(n);
        n++;
    }
    putchar('\n');
    return (0);
}
