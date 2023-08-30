#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of element of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temporary, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temporary = a[counter];
	a[counter++] = a[n];
	a[n--] = temporary;
	}
}
