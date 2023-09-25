#include "main.h"

/**
  * _strspn - function name
  * @s: first parameter
  * @accept: second parameter
  * Return: characters counted
  */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; s[a] != accept[b]; b++)
		{
			if (accept[b] == '\0')
				return (a);
		}
	}
	return (0);
}
