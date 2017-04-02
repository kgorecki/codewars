// Dubstep 6th kyu kata

using System;
using System.Linq;
using System.Text.RegularExpressions;

public class Dubstep
{
  public static string SongDecoder(string input)
  { 
    input = input.Replace("WUB", " ").Trim().Replace("  ", " ");
    return Regex.Replace(input,@"\s+"," ");
  }
}

