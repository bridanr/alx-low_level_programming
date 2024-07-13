#include "main.h"

/**
 * _isdigit - checks for a digit or character
 * @c: parameter being checked
 * Return: 1 if number or 0 if character
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
