#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 *
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("0");
		return;
	}

	while (n > 0)
	{
		printf("%lu", n & 1);
		n >>= 1;
	}
}
