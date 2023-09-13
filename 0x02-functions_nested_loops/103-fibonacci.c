#include <stdio.h>
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The integer number.
 *
 * Return: The value of the last digit.
 */
int main(void)
{
	int first = 1, second = 2, next, sum = 0;

	while (second <= 4000000)
	{
	if (second % 2 == 0)
	{
		sum += second;
	}

	next = first + second;
	first = second;
	second = next;
	}

	printf("Sum of even-valued terms in the Fibonacci sequence below 4,000,000: %d\n", sum);

	return 0;
}
