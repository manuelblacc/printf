#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * @format: formatted string
 * @i: list of arguments to be printed
 *
 * Return: Precision
 */
int get_size(const char *format, int *i)
{
	int curri_i = *i + 1;
	int size = 0;

	if (format[curri_i] == 'l')
		size = S_LONG;
	else if (format[curri_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curri_i - 1;
	else
		*i = curri_i;
	return (size);
}
