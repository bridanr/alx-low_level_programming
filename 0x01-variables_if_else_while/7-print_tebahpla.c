#include <stdio.h>

/**
 * main - main func
 * Return: usually 0
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
