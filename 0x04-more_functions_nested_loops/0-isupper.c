#include "main.h"

/**
  * _isupper - Check if a letter is upper
  * @c: The number to be checked
  *
  * description: this is a program that prints _isupper
  * Return: 1 for upper letter or 0 for any else
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
