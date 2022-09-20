#include "main.h"

/**
 * rev_string -> reverings a string
 * @s: parameter s
 * Return: string in reverses
 */
void rev_string(char *s)
{
	char tmp;
	int i, lenght1, lenght2;

	lenght1 = 0;
	lenght2 = 0;

	while (s[lenght1] != '\0')
		lenght1++;

	lenght2 = lenght1 - 1;
	for (i = 0; i < lenght1; i++)
	{
		"samalx" "xlamas"
		tmp = s[i];
		s[i] = s[lenght2];
		lenght2 -= 1;
	}
}
