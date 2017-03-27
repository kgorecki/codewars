// Roman Numerals Encoder 4th kyu kata

string getDigit(int digit, string one, string five, string ten)
{
  string result = "";

  switch (digit)
  {
    case 1: result = one; break;
    case 2: result = one + one; break;
    case 3: result = one + one + one; break;
    case 4: result = one + five; break;
    case 5: result = five; break;
    case 6: result = five + one; break;
    case 7: result = five + one + one; break;
    case 8: result = five + one + one + one; break;
    case 9: result = one + ten; break;
  }

  return result;
}

string solution(int number)
{
  string result = "";
  while (number >= 1000)
  {
    result += "M";
    number -= 1000;
  }
  
  if (number / 100)
  {
    result += getDigit(number / 100, "C", "D", "M");
    number %= 100;
  }
  
  if (number / 10)
  {
    result += getDigit(number / 10, "X", "L", "C");
    number %= 10;
  }
  
  if (number)
    result += getDigit(number, "I", "V", "X");

  return result;
}

