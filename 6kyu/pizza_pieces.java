// Pizza pieces 6th kyu kata
// http://mathworld.wolfram.com/PlaneDivisionbyLines.html

public class Pizza {

  public static int  maxPizza(int cut) {
    if (cut < 0)
      return -1;
    return (cut * cut + cut + 2) / 2;
  }
}

