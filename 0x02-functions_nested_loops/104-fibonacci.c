#include <stdio.h>
#include <limits.h>
/**
 * numlength - Calculate the number of digits in an integer.
 * @num: The integer for which to determine the number of digits.
 *
 * Return: The number of digits in the integer 'num'.
 */
int numlength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Description: This program calculates and prints the first 98 Fibonacci
 * numbers, starting with 1 and 2, separated by commas and spaces, and followed
 * by a newline. It does not use arrays, recursion, or any external libraries.
 *
 * Return: Always 0.
 */
int main(void)

{
	unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, h1 = 0, h2 = 0, tm = 0;
	short int i = 1, a;

	while (i <= 98)
	{
		if (h1 > 0)
			printf("%lu", h1);
		a = numlength(mx) - 1 - numlength(f1);
		while (h1 > 0 && a > 0)
		{
			printf("%i", 0);
			a--;
		}
		printf("%lu", f1);

		tmp = (f1 + f2) % mx;
		tm = h1 + h2 + (f1 + f2) / mx;
		f1 = f2;
		h1 = h2;
		f2 = tmp;
		h2 = tm;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
