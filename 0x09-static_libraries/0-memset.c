#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
