#include "main.h"

/**
 * print_S - A function that prints a string and nonprintable
 * character ascii values
 * @S: string to print
 * Return: number of printed characters
 */
int print_S(va_list list)
{
	unsigned int i = 0;
	int counter = 0;
	char *str;
    str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";
	for (; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			counter += 2;
			counter += print_heX(list);
		}
		else
		{
			_putchar(str[i]);
			counter++;
		}
	}
	return (counter);
}
