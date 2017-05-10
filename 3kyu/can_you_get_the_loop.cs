// Can you get the loop ? 3rd kyu kata

using System;
using System.Collections.Generic;

public class Kata
{
  public static int getLoopSize(LoopDetector.Node startNode)
  {
    List<LoopDetector.Node> visited = new List<LoopDetector.Node>();
    
    LoopDetector.Node node = startNode.next;
    while (null != node)
    {
      if (visited.Contains(node))
      {
        return visited.Count - visited.IndexOf(node);
      }
      else
        visited.Add(node);
      node = node.next;
    }
    return 0;
  }
}

