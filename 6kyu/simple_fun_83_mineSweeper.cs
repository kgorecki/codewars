// Simple Fun #83: MineSweeper 6th kyu kata

namespace myjinxin
{
    using System;
    
    public class Kata
    {
        public int[][] Minesweeper(bool[][] matrix){
          int[][] result;
          result = new int[matrix.Length][];
          for (int i = 0; i < matrix.Length; i++)
          {
            result[i] = new int[matrix[0].Length];
            for (int j = 0; j < matrix[0].Length; j++)
            {
              result[i][j] = 0;
              for (int di = -1; di < 2; di++)
                for (int dj = -1; dj < 2; dj++)
                  if ((i + di) >= 0 && (j + dj) >= 0
                    && (i + di) < matrix.Length && (j + dj) < matrix[0].Length
                    && !(di == 0 && dj == 0))
                    if (matrix[i + di][j + dj])
                      result[i][j]++;
            }
          }
          return result;
        }
    }
}

