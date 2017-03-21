//#define g 9.81
//#define dt 0.1

class Ball
{
  public:
    static constexpr double g() {return 9.81;}
    static constexpr double dt() {return 0.1;}

    static double height(double v, int interval)
    {
      return v * dt() * interval - 0.5 * g() * dt() * interval * dt() * interval;
      // if usining defines instead of constexpr:
      //return v * dt * interval - 0.5 * g * dt * interval * dt * interval;
    }
    
    static int maxBall(int v0)
    {
       double v1 = (double)v0 * 10 / 36; // conversion of speed to m/s
       int counter = 1;
       while (height(v1, counter) < height(v1, counter + 1))
         ++counter;
       return counter;
    }
};


