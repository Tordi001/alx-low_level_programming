#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - checks if positive, zero or negative
 *
 * Return:Always 0 (successful)
 */
int main(void)
{
	int n;
	Srand(time(0));
	n = RAND() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
