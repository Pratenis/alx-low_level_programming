#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: pointer to string to search
* @accept: pointer to string of bytes to match
* Return: Always 0
*/
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
				return (s);
		}
		s++;
	}

	return ('\0');
}
