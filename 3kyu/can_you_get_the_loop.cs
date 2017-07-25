// Can you get the loop ? 3rd kyu kata

using System;
using System.Collections.Generic;

public class Kata
{
  public static int getLoopSize(LoopDetector.Node startNode)
  {
    int counter = 0;
    Dictionary<LoopDetector.Node, int> visited = new Dictionary<LoopDetector.Node, int>();

    LoopDetector.Node node = startNode.next;
    while (null != node && !visited.ContainsKey(node))
    {
      visited.Add(node, counter);
      node = node.next;
      ++counter;
    }
    return visited.Count - visited[node];
  }
}

