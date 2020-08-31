// The Vowel Code 6th kyu kata
// https://www.codewars.com/kata/53697be005f803751e0015aa

#include <stdlib.h>
#include <string.h>

enum Operation
{
  Decode,
  Encode
};

enum Array
{
  DecodeArray,
  EncodeArray
};

char decoded[] = {'a', 'e', 'i', 'o', 'u'};
char encoded[] = {'1', '2', '3', '4', '5'};

char *getArray(enum Operation operation, enum Array array)
{
  if ((Decode == operation && EncodeArray == array)
     || (Encode == operation && DecodeArray == array))
    return decoded;
  return encoded;
}

char swap(char letter, enum Operation operation)
{
  char *de = getArray(operation, DecodeArray);
  char *en = getArray(operation, EncodeArray);
  int size = strlen(de);
  for (int i = 0; i < size; i++)
    if (*(de + i) == letter)
        return *(en + i);
  return letter;
}

char *doMagic(const char *string, enum Operation operation)
{
  char *str = malloc(strlen(string) + 1);
  int i = 0;
  while (*string)
    *(str + i++) = swap(*(string++), operation);
  *(str + i) = '\0';
  return str;
}

char *encode(const char *string)
{
  return doMagic(string, Encode);
}

char *decode(const char *string)
{
  return doMagic(string, Decode);
}
