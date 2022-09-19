#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: String length
 *
 * Return: returns lenght as integers;
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	return (len);
}
