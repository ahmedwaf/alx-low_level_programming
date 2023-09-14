#include "main.h"

/**
 * main - entry point
 *
 * Description: false or true  validation
 *
 * Return: 0 (success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%i is positive\n", i);
	else if (i == 0)
		printf("%i is zero\n", i);
	else
		printf("%i is negative\n", i);
}
