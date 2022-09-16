#include "main.h"

/**
 * _isdigit - checks whether a character is a digit or not
 * @c: Tested character
 * Return: 1 for character that will be a digit or 0 otherwise
 */

int _isdigit(int c)
{

	if ((c >= 45) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
