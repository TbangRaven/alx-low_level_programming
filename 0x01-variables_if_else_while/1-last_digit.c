#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Determine a randon number to a variable
 * Return: Always return 0 (Success)
*/
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and greaterthan 5\n", n, m);
	if (m == 0)
		printf("Last digit of %d is %d and 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less then 6 and not )\n", n, m);
	return (0);
}
