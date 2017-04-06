// Sum of Digits / Digital Root 6th kyu kata

public class Number
{
  public int DigitalRoot(long n)
  {
    while (0 != n / 10)
    {
      long m = n;
      n = 0;
      while (0 != m)
      {
        n += m % 10;
        m /= 10;
      }
    }
    return (int)n;
  }
}

