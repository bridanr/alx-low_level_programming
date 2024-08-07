#include "main.h"

/**
 * prt_i - prints integer
 * @args: argument
 * Return: integer
 */

int print_i(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int r = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		r++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			r++;
		}
	}
	_putchar(last + '0');

	return (r);
}

/**
 * prt_d - prints decimal
 * @args: argument
 * Return: integer
 */

int prt_d(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int  r = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		r++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			r++;
		}
	}
	_putchar(last + '0');

	return (r);
}
