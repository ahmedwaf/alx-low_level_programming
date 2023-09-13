#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of times tables to print (0 to 15).
 *
 * Description: This function prints the times table up to n, following the
 * specified format.
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
{
	return;
	}
	int row, column;
	int product;

	for (row = 0; row <= n; row++)
{
		for (column = 0; column <= n; column++)
		{
		product = row * column;

		if (column != 0) {
		_putchar(',');
		_putchar(' ');

		if (product < 10)
		{
		_putchar(' ');
		}
		}

		if (product < 10)
		{
		_putchar(' ');
		_putchar('0' + product);
		{
		else if (product >= 10 && product < 100) {
		_putchar('0' + product / 10);
		_putchar('0' + product % 10);
		}
		else
		{
		_putchar('0' + product / 100);
		_putchar('0' + (product % 100) / 10);
		_putchar('0' + product % 10);
		}
		}
		_putchar('\n');
	}
}
