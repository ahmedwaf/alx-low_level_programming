#include <stdio.h>

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
