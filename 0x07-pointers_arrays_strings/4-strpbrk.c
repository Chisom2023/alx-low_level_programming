#include "main.h"

/**
  * _strpbrk - function name
  * @s: first parameter
  * @accept: second parameter
  * Return: always 0
  */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
