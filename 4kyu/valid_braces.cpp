// Valid Braces 4th kyu kata

bool validPair(char a, char b)
{
  if (a == '[' && b == ']')
    return true;
  if (a == '(' && b == ')')
    return true;
  if (a == '{' && b == '}')
    return true;
  return false;
}

bool valid_braces(std::string braces) 
{
  std::string::iterator bi = braces.begin();
  std::string::iterator bi_end = braces.end();
  std::string openBraces("");
  
  for (; bi != bi_end; bi++)
  {
    if (*bi == '[' || *bi == '(' || *bi == '{')
      openBraces.push_back(*bi);
    else if (*bi == ']' || *bi == ')' || *bi == '}')
    {
      if (!validPair(*(openBraces.end() - 1), *bi))
        return false;
      openBraces.pop_back();
    }
  }
  if (openBraces.length())
    return false;
  
  return true;
}

