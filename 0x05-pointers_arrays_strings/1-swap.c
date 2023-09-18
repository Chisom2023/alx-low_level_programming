#include "main.h"
/**
  * swap_int - function name
  * @a: first parameter of function
  * @b: second parameter of function
  */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
