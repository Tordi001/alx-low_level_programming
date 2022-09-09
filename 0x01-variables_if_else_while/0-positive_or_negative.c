#include <stdio.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* initial short description */
/* betty style doc for function main goes there */
/**
 * main - This is a description
 * Return: 0 if successful. 1 othewise
 */
int main(void)
{
	int nn;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10;
	if (m == 0)
		printf("last degit of %i is 0 and is 0\n", n);
	if (m > 5)
		printf("last degit of %i is %i and is greater than 5\n", n, m);
	if (m < 6 && m != 0)
		printf("last degit of %i is %i and is less than 6 and not 0\n", n, m);
	return (0);
}
