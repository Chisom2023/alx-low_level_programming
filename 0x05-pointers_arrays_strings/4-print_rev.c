#include "main.h"

/**
  * _rev - the function name
  * @s : parameter of the function
  */

void print_rev(char *s)
{
int i;
int count = 0;

for (i = 0; s[i] != '\0'; i++)
	count++;

for (i = count - 1; i >= 0; i--)
{
	_putchar (s[i]);
}
	_putchar ('\n');
}
