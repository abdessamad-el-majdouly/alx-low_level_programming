#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the specified index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index) {
  /* Check if the index is valid. */
  if (index < 0 || index >= 64) {
    return -1;
  }
  unsigned int mask = 1 << index;
  return (n & mask) > 0;
}
