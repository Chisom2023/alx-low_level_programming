#include "main.h"
/**
  * _strchr - function name
  * @s: first parameter
  * @c: second parameter
  * Return: c
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
		if (*s == c)
			return (s);
		return (NULL);
}
