// Help the bookseller! 6th kyu kata
// https://www.codewars.com/kata/54dc6f5a224c26032800005c

int digitsInInt(int i)
{
  int result = 0;
  do
    ++result;
  while (i /= 10);
  return result;
}

// szlst is lstOfArt size, szcat is categories size
char* stockSummary(char** lstOfArt, int szlst, char** categories, int szcat)
{
  if (0 == szlst || 0 == szcat)
    return "";
  int* result = malloc(szcat * sizeof(int));
  for (int i = 0; i < szcat; i++)
    result[i] = 0;
  char tempValue[10];
  for (int i = 0; i < szcat; i++)
    for (int j = 0; j < szlst; j++)
      if (**(lstOfArt + j) == **(categories + i))
      {
        strcpy(tempValue, strchr(*(lstOfArt + j), ' ') + 1);
        result[i] += atoi(tempValue);
      }
  int charsCount = 0;
  for (int i = 0; i < szcat; i++)
    charsCount += digitsInInt(result[i]);
  int resultSize = charsCount + szcat * 9;
  char* resultString = malloc(resultSize);
  char* tempString = malloc(resultSize);
  snprintf(resultString, resultSize, "(%c : %d)", **categories, *result);
  for (int i = 1; i < szcat; i++)
  {
    snprintf(tempString, resultSize, " - (%c : %d)", **(categories + i), *(result + i));
    strcat(resultString, tempString);
  }
  free(tempString);
  return resultString;
}
