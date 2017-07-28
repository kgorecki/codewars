// Equal Sides Of An Array 6th kyu kata
int find_even_index(const int *values, int length) {
  int left = 0, right = 0, current = 0;
  for (int i = 0; i < length; i++)
    right += *(values + i);
  for (int i = 0; i < length; i++)
  {
    left += current;
    right -= *(values + i);
    current = *(values + i);
    if (left == right)
      return i;
  }
  return -1;
}
