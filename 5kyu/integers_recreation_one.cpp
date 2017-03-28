// Integers: Recreation One 5th kyu kata

#include <cmath>

template <typename T>
  std::string join(const T& v, const std::string& delim)
  {
    std::ostringstream s;
    for (const auto& i : v)
    {
      if (&i != &v[0])
        s << delim;
      s << i;
    }
    return s.str();
}

class SumSquaredDivisors
{
public:
  static std::string listSquared(long long m, long long n)
  {
    std::vector<std::string> result;
    for (; m <= n; m++)
    {
      long long lres = 0;
      for (int i = 1; i <= m; i++)
        if (0 == m % i)
          lres += i * i;
      int rres = (int) sqrt(lres);
        
      if (lres == rres * rres)
        result.push_back(std::string("{") + std::to_string(m) + ", " + std::to_string(lres) + std::string("}"));
    }
      
    std::string resstr = join(result, std::string(", "));
      
    return std::string("{") + resstr + std::string("}");
  }
};

