// Decode the Morse code 6th kyu kata

std::string decodeMorse(std::string morseCode) {
    std::string decoded;
    std::istringstream iss(morseCode);
    std::string tempStr;
    
    while (std::getline(iss, tempStr, ' '))
    {
      if ("" != tempStr)
        decoded += MORSE_CODE[tempStr];
      else
        if (decoded.back() != ' ' && decoded.length() )
          decoded += " ";
    }
    return decoded.erase(decoded.find_last_not_of(' ') + 1);
}

