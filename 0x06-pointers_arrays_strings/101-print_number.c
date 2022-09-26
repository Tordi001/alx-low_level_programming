Task 9.txt

Who has access

A

System properties

Type

Text

Size

401 bytes

Storage used

401 bytes

Location

0x06-pointers_arrays_strings

Owner

Antony Bahati

Modified

Sep 23, 2022 by Antony Bahati

Opened

11:21 PM by me

Created

Sep 23, 2022

No description

Viewers can download

#include "main.h"



/**

*print_number - prints an integer.

*

*@n: integer

*

*Return: void

*/



void print_number(int n)

{

	unsigned int m, d, count;



	if (n < 0)

	{

		_putchar(45);

		m = n * -1;

	}

	else

	{

		m = n;

	}



	d = m;

	count = 1;



	while (d > 9)

	{

		d /= 10;

		count *= 10;

	}



	for (; count >= 1; count /= 10)

	{

		_putchar(((m / count) % 10) + 48);

	}

}:wq
