#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The har to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 65 && c <= 97)
	{
	return (1);
	}
	return (0);
}
