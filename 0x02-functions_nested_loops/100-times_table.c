#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of times tables to print (0 to 15).
 *
 * Description: This function prints the times table up to n, following the
 * specified format.
 */
void print_times_table(int n) {
    if (n < 0 || n > 15) {
        return;
	}

	int row, column, product;

	for (row = 0; row <= n; row++)
	{
	for (column = 0; column <= n; column++)
	{
		product = row * column;
	if (column == 0)
	{
		printf("%d", product);
	}
	else
{
		printf(", %2d", product);
		}
	}
	printf("\n");
	}
}

int main()
{
	int n = 12;
	print_times_table(n);
	return 0;
}
