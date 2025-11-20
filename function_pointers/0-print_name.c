#include "function_pointers.h"

/**
 * print_name - prints a name using a callback function
 * @name: name to print
 * @f: function pointer to a function that takes a char * and returns void
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
    f(name);
}
