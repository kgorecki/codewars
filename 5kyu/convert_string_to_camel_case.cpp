// Convert string to camel case 5th kyu kata

#include <string>

std::string to_camel_case(std::string text) {
  std::vector<char> sep = {'-', '_'};
  for (std::string::iterator ti = text.begin(); ti < text.end(); ti++)
    if (std::find(sep.begin(), sep.end(), *ti) != sep.end())
    {
      text.erase(ti);
      text.replace(ti, ti + 1, 1, toupper(*ti));
    }
  return text;
}

