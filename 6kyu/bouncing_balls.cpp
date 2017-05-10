// Bouncing Balls 6th kyu kata

class Bouncingball
{
public:
  static int bouncingBall(double h, double bounce, double window)
  {
    if (1 <= bounce || 0 > bounce || h <= window)
      return -1;
    int count = 1;
    while ((h = h * bounce) > window)
      count += 2;
    return count;
  };
};

