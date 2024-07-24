#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: the name given
 * @f: funtions of the name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
