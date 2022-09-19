#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: String length
 *
 * Return: String lenth
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\n'; s++)
	{
		c++;
	}

	return (c);
}
