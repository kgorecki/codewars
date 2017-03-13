// Valid Braces 4th kyu kata
bool valid_braces(std::string braces) 
{
  std::string::iterator bi = braces.begin();
  std::string::iterator bi_end = braces.end();
  std::string openBraces("");
  std::map<char, char> pairs {{']','['}, {')','('}, {'}','{'}};
  
  for (; bi != bi_end; bi++)
  {
    if (*bi == '[' || *bi == '(' || *bi == '{')
      openBraces.push_back(*bi);
    else if (*bi == ']' || *bi == ')' || *bi == '}')
    {
      if (*(openBraces.end() - 1) != pairs[*bi])
        return false;
      openBraces.pop_back();
    }
  }
  if (openBraces.length())
    return false;
  
  return true;
}

