// Chess Fun #1: Chess Board Cell Color 6th kyu kata

namespace myjinxin
{
    using System;
    
    public class Kata
    {
        public bool ChessBoardCellColor(string cell1, string cell2){
          if ((cell1[0] + cell1[1]) % 2 ==
              (cell2[0] + cell2[1]) % 2)
            return true;
          return false;
        }
    }
}

