#include "main.h"
/**
  * _puts - the function
  * @str: parameter of function
  */


void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
_putchar (str[i]);
_putchar ('\n');
}
