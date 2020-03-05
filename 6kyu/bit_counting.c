// Bit Counting 6th kyu kata
// https://www.codewars.com/kata/526571aae218b8ee490006f4

#include <stddef.h>

size_t countBits(unsigned value)
{
  int counter = 0;
  do
    if (value & 1)
      ++counter;
  while (value = value >> 1);
  return counter;
}
