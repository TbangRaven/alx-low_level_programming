#include "main.h"
#include <stdio.h>
/**
 * print_array - print nelements of an array of integers
 * @a: array to be used
 * @n: number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; 1 < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
