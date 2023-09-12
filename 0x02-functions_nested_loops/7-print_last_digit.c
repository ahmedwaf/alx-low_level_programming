#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
	{
	last_digit = 8; // The last digit of INT_MIN is 8
	_putchar('0' + last_digit);
	return last_digit;
	}

	if (n < 0)
	n = -n;

	last_digit = n % 10;
	_putchar('0' + last_digit);

	return last_digit;
}
