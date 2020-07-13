// Braking well 6th kyu kata
// https://www.codewars.com/kata/565c0fa6e3a7d39dee000125

#define g 9.81

double dist(double v, double mu)
{
  v /= 3.6;
  return v + v * v / (2 * mu * g);
}

double speed(double d, double mu)
{
  double temp = -2 * mu * g;
  return ((temp + sqrt(temp * temp - 4 * temp * d)) / 2) * 3.6;
}
