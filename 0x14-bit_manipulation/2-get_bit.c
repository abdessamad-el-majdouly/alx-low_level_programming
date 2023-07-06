#include "main.h"
#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the specified index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
        return -1; // Error: index out of range

    unsigned long int mask = 1UL << index;
    unsigned long int result = n & mask;

    return (result > 0) ? 1 : 0;
}
