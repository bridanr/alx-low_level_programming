#include "main.h"

/**
 * _abd - Computes the absolute value of an integer.
 * @c: The number to be computed.
 * Return: Absolute value of number or 0
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
