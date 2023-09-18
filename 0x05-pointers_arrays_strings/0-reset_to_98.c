#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - Updates the value pointed to by a pointer to 98.
 *
 * @n: A pointer to an integer.
 *
 * Description:
 * This function takes a pointer to an integer as a parameter and
 * updates the value it points to 98.
 */
void reset_to_98(int *n)
{
	*n = 98;
}

int main(void)
{
	int num = 42;

	printf("Before reset_to_98: %d\n", num);

	reset_to_98(&num);

	printf("After reset_to_98: %d\n", num);

	return (0);
}
