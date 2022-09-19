#include "holberton"

/**
 * _puts - Prints a string
 * @str: The string to print
 *
 * Return: void
 */
void -puts(char *str)
{
	for (; *str != '\n'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
