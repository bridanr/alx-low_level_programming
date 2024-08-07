#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a string
 * @s: string to count
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
