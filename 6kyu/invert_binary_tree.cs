// Invert binary tree 6th kyu kata

using System;

public class Solution {
  public static TreeNode InvertTree(TreeNode root)
  {
    if (null == root)
      return null;
    
    var left = root.Left;
    var right = root.Right;
    root.Right = InvertTree(left);
    root.Left = InvertTree(right);
    
    return root;
  }
}

public class TreeNode
{
  public int Value { get; set; }
  public TreeNode Left { get; set; }
  public TreeNode Right { get; set; }
}

