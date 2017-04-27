// Reverse polish notation calculator 4th kyu kata

using System;
using System.Collections;

public class Calc
{
  public double evaluate(String expr)
  {
    if ("" == expr)
      return 0;
    
    Stack stack = new Stack();
    
    String[] elements = expr.Split(' ');
    
    foreach (string element in elements)
    {
      switch (element)
      {
        case "+":
          stack.Push((double)stack.Pop() + (double)stack.Pop()); break;
        case "-":
          stack.Push(- (double)stack.Pop() + (double)stack.Pop()); break;
        case "*":
          stack.Push((double)stack.Pop() * (double)stack.Pop()); break;
        case "/":
          double a = (double)stack.Pop();
          double b = (double)stack.Pop();
          stack.Push(b / a); break;
        default:
          stack.Push(Convert.ToDouble(element)); break;
      }
    }
    return (double)stack.Pop();
  }
}

