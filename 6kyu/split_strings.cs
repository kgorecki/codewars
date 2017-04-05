// Split Strings 6th kyu kata

public class SplitString
{
  public static string[] Solution(string str)
  {
    string[] result = new string[(str.Length + 1) / 2];
    for (int i = 0; i < str.Length; i++)
      result[i / 2] += str[i];
    if (result[result.Length - 1].Length == 1)
      result[result.Length - 1] += "_";
    return result;
  }
}

