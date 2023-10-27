#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 *
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: The converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	value = 0;
	i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		value |= (b[i] - '0') << (31 - i);
		i++;
	}

	return (value);
}
