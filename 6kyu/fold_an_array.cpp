// Fold an array 6th kyu kata

class Kata
{
public:
  std::vector<int> foldArray(std::vector<int> array, int runs)
    {
      for (int i = 0; i < runs; i++)
      {
        int size = array.size() / 2;
        std::vector<int>::iterator it = array.begin();
        for (int j = 0; j < size; j++, it++)
        {
          *it += array.back();
          array.pop_back();
        }
      }
      return array;
    }
};

