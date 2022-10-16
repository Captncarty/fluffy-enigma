#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	print_t p[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent}
    };
    va_list arg_list;

    if (format == NULL)
        return (1);

    va_start(arg_list, format);
    /* calling parser */
    printed_chars = parser(format, p, arg_list);
    va_end(arg_list);

    return (printed_chars);
}