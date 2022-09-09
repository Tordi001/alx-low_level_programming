#include <stdio.h>
#include <stdio.h>
#include <time.h>
/**
 * main - This is  a description
 * Return: 0 if successful. 1 otherwise
 */
int main(void)
{

	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_WAX / 2;

	last = n % 10;
	if (n > 0)
		printf("%d is positive|n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
