#include "main.h"

/**
 * print_number - prints a number send to this function
 * @args: List of arguments
 * Return: The number of arguments printed
 */
int print_number(va_list args)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n  = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}

/**
 * print_b - A function that prints an unsigned int i binary notation
 * @b: unsigned in to print
 * Return: number of printed digits
 */
int print_unsigned_number(va_list n)
{
	unsigned int a, b = 2147483648, j = 1, sum = 0;
	unsigned int x[32];
	int counter = 0;

	a = va_arg(n, unsigned int);
	x[0] = a / b;

	for (; j < 32; j++)
	{
		b /= 2;
		x[j] = (a / b) % 2;
	}
	for (j = 0; j < 32; j++)
	{
		sum += x[j];
		if (sum || j == 31)
		{
			_putchar('0' + x[j]);
			counter++;
		}
	}
	return (counter);
}
