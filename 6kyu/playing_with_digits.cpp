// Playing with digits 6th kyu kata
#include <cmath>
#include <vector>

class DigPow
{
public:
  static int digPow(int n, int p)
  {
    std::vector<int> digits;
    int n0 = n;
    while (n0)
    {
      digits.push_back(n0 % 10);
      n0 /= 10;
    }
    int sum = 0;
    while (digits.size())
    {
      int it = digits.back();
      digits.pop_back();
      sum += pow(it, p);
      ++p;
    }
    int i = 1;
    for (; sum > n * i; i++);
    if (n * i == sum)
        return i;
    return -1;
  }
};

