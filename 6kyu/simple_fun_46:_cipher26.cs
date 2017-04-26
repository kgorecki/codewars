// Simple Fun #46: Cipher26 6th kyu kata

namespace myjinxin
{
  using System;
  
  public class Kata
  {
    private const string alpha = "abcdefghijklmnopqrstuvwxyz";

    public string Cipher26(string message)
    {
      Console.WriteLine(message);
      int pos = 0;
      string result = String.Empty;
      
      foreach (char c in message)
      {
        result += alpha[(26 + alpha.IndexOf(c) - pos) % 26].ToString();
        pos = alpha.IndexOf(c);
      }
      return result;
    }
  }
}

