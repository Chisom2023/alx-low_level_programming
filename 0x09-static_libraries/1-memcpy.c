#include "main.h"
/**
  *  _memcpy - function name
  * @dest: first parameter
  * @src: second parameter
  * @n: third parameter
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
