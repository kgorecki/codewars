// Simple Fun #167: Spreadsheet 5th kyu kata

namespace myjinxin
{
  using System;
  using System.Text.RegularExpressions;
  
  public class Kata
  {
    private string ToSpreadsheet(string s)
    {
      Regex re = new Regex(@"C\d+");
      int iColumn = Convert.ToInt32(re.Match(s).Value.Remove(0, 1));
      string sColumn = String.Empty;
      int m;
      while (iColumn > 0)
      {
        m = (iColumn - 1) % 26;
        sColumn = Convert.ToChar('A' + m) + sColumn;
        iColumn = (iColumn - m) / 26;
      }
      
      re = new Regex(@"R\d+");
      return sColumn + re.Match(s).Value.Remove(0, 1);
    }
    
    private string ToRowColumn(string s)
    {
      Regex re = new Regex(@"[A-Z]*");
      string sr = re.Match(s).Value;
      int row = 0;
      for (int i = 0; i < sr.Length; i++)
      {
        row *= 26;
        row += (sr[i] - 'A' + 1);
      }
      
      re = new Regex(@"\d+");
      return "R" + re.Match(s).Value + "C" + row.ToString();
    }
    
    public string Spreadsheet(string s)
    {
      Console.WriteLine(s);
      Regex re = new Regex(@"^[A-Z]+[0-9]+$");
      if (re.IsMatch(s))
        return ToRowColumn(s);
      else
        return ToSpreadsheet(s);
    }
  }
}

