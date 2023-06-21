#include "main.h"
/**
 * _is lower - Shows 1 if the input is a
 * lowercase character. Another case, shows 0
 *
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
