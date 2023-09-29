#include "main.h"
/**
 * _print_rev_recursion - function name that print a string in reverse
 * @s: The function parameter
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
