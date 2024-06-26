#include <stdio.h>

/**
 * main - sum of natural numbers below 10 and are multiples of 5
 * Return: void
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}

	printf("%d\n", sum);
}
