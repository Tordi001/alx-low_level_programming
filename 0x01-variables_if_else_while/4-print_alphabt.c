#include <stdio.h>

/**
 * main - printf("programming is like building a multilingual puzzle")
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char low, e, q:

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
			putchar(low);
	}
	putchar('\n');

	return (0);
}
