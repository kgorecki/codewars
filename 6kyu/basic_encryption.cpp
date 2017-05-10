// Basic Encryption 6th kyu kata
string encrypt(string text, int rule) {
  string result = "";
  for (string::iterator it = text.begin(); it != text.end(); ++it)
    result += (*it + rule) % 256;
  return result;
};

