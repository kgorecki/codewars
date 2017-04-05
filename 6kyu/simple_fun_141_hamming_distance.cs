// Simple Fun #141: Hamming Distance 6th kyu kata

namespace myjinxin
{
    using System;
    using System.Linq;
    
    public class Kata
    {
        public int HammingDistance(int a, int b){
          return Convert.ToString(a ^ b, 2).Count(f => f == '1');
        }
    }
}

