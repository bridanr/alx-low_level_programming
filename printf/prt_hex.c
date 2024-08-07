#include "main.h"

/**
 * prt_hex - prints an hexadecimal integer
 * @val: arguments
 * Return: counter
 */
int prt_hex(va_list val)
{
	int r;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (r = 0; r < counter; r++)
	{
		array[r] = tem % 16;
		tem /= 16;
	}
	for (r = counter - 1; r >= 0; r--)
	{
		if (array[r] > 9)
			array[r] = array[r] + 39;
		_putchar(array[r] + '0');
	}
	free(array);
	return (counter);
}
