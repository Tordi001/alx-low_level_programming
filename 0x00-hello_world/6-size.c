#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %d byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: $%d byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: byte(s)\n" (unsigned long)sizeof(c));
	printf("size of a long long int: byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}

