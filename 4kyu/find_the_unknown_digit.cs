// Find the unknown digit 4th kyu kata

using System;

public class Runes
{
  private static string getMissingDigits(string expression)
  {
    string result = "";
    for (int i = 0; i <= 9; i++)
      if (-1 == expression.IndexOf(i.ToString()))
        result += i.ToString();
    return result;
  }

  public static int solveExpression(string expression)
  {
    string digits = getMissingDigits(expression);
    string ops = "+*-";
    int eqpos = expression.IndexOf("=");
    
    for (int i = 0; i < digits.Length; i++)
    {
      string temp = expression.Replace("?", digits[i].ToString());
      for (int j = 0; j < ops.Length; j++)
      {
        int pos = expression.IndexOf(ops[j].ToString());
        if (0 == pos)
          pos = expression.IndexOf(ops[j].ToString(), 1);
        if (-1 != pos)
        {
          string sa = temp.Substring(0, pos);
          int a = Convert.ToInt32(sa);
          string sb = temp.Substring(pos + 1, eqpos - pos - 1);
          int b = Convert.ToInt32(sb);
          string sres = temp.Substring(eqpos + 1);
          int res = Convert.ToInt32(sres);
          if ((0 == a && sa.Length > 1)
              || (0 == b && sb.Length > 1)
              || (0 == res && sres.Length > 1))
            continue;
          int tempRes;
          switch (ops[j])
          {
            case '+': tempRes = a + b; break; 
            case '*': tempRes = a * b; break; 
            default: tempRes = a - b; break; 
          }
          if (tempRes == res)
            return Convert.ToInt32(digits[i] - '0');
        }
      }
    }

  return -1;
  }
}

