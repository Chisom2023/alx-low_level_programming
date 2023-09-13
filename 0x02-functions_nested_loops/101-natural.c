#include <stdio.h>

/**
  *main - Lists all the nat num below 1024 (exc.) that are mult. of 3 or 5.
  *
  * This prog cal the sum of all nat num below 1024 that are mult of 3 or 5
  * and prints the result.
  *
  * Return: Always 0.
  */
int main(void)
{

int i, sum = 0;

for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += i;
}

printf("%d\n", sum);

return (0);

}
