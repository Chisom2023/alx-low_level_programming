#include "main.h"

/**
  * print_array - name of function
  * @a : first parameter of function
  * @n : second parameter of function
  */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
{
	if (i < n - 1)
		printf(", ");

}
}
	printf("\n");
}
