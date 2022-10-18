#include "main.h"

/**
 * main - test for NULL string
 *
 * Return: Always 0
 */
int main(void)
{
	printf(NULL); /* shouldn't print */
	_printf(NULL);

	printf("Test: %s\n", NULL); /* Test: (null) */
	_printf("Test: %s\n", NULL);

	printf("%s\n", NULL);  /* Seg fault */
	_printf("%s\n", NULL);
	return (0);
}

