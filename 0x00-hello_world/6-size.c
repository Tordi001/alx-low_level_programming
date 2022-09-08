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

	printf("size of a char: %d byte(s)\n", (unsigned long)sizeof(char));
	printf("size of a int: %d byte(s)\n", (unsigned long)sizeof(int));
	printf("size of a long int: %d byte(s)\n", (unsigned long)sizeof(long int));
	printf("size of a long long int:%d byte(s)\n", (unsigned long)sizeof(long long int));
	printf("size of a float: %d byte(s)\n", (unsigned long)sizeof(float));
	return0;
}
