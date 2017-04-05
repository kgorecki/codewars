// Are they the "same"? 6th kyu kata

using System;
using System.Collections.Generic;

class AreTheySame
{
  private static SortedDictionary<int, int> fill(int[] a, bool square=false)
  {
    SortedDictionary<int, int> result = new SortedDictionary<int, int>();
    foreach (int val in a)
    {
      int index = val;
      if (square)
        index *= index;
      if (result.ContainsKey(index))
        result[index] = result[index] + 1;
      else
        result.Add(index, 1);
    }
    return result;
  }
  
  public static bool comp(int[] a, int[] b)
  {
    if (a == null || b == null || (a.Length == 0 ^ b.Length == 0) || a.Length != b.Length)
      return false;
    if (a.Length == 0 && b.Length == 0)
      return true;
    SortedDictionary <int, int> dict_a = fill(a, true);
    SortedDictionary <int, int> dict_b = fill(b);
    foreach (var entry in dict_a)
      if (entry.Value != dict_b[entry.Key])
        return false;
    return true;
  }
}

// This one is pretty ;}
using System.Linq;
class AreTheySame
{
   public static bool comp(int[] a, int[] b)
     {
       if (a == null || b == null) return false;
         var result = a.Select(x => x*x).OrderBy(x=>x).SequenceEqual(b.OrderBy(x=>x));
       return result;
     }
}

