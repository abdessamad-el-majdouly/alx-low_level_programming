#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * print_binary - a function ....
 * @n: the chaine of caractere
 *
 * Return: 1 or 0
 */
void print_binary(unsigned long int n)
{
	int bit =  sizeof(n) * 8, printed = 0;

	while (bit)
	{
		
		if (n & 1L << --bit)
		{	
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
		
	}

	if (!printed)
		_putchar('0');
}
