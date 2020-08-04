// Valid Parentheses 5th kyu kata
// https://www.codewars.com/kata/52774a314c2333f0a7000688

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool quit(bool val, char* str)
{
  free(str);
  return val;
}

bool validParentheses(const char* strin)
{
  int length = strlen(strin);
  if (0 == length)
    return true;
  char *stack;
  stack = malloc(sizeof(char) * length + 1);
  int tail = 0;
  for (int i = 0; i < length; i++)
  {
    if ('(' == *(strin + i))
    {
      stack[tail] = *(strin + i);
      ++tail;
    }
    else
    {
      if (')' == *(strin + i))
      {
        --tail;
        if (tail < 0 || '(' != *(stack + tail))
          return quit(false, stack);
      }
    }
  }
  return quit(0 == tail, stack);
}
