// Find The Parity Outlier 6th kyu kata

public class FindOutlier{
  static int find(int[] integers){
    int odds = 0;
    int odd = 0;
    int evens = 0;
    int even = 0;
    for (int currentInt : integers) {
      if (0 == currentInt % 2) {
        if (odds > 1) {
          return currentInt;
        }
        evens++;
        even = currentInt;
      } else {
        if (evens > 1) {
          return currentInt;
        }
        odds++;
        odd = currentInt;
      }
      
    }
    
  return evens > odds ? odd : even;
}}

