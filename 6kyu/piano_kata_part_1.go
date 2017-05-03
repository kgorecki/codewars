// Piano Kata, Part 1 6th kyu kata

package kata

func BlackOrWhiteKey(keyPressCount int) string {
    s := "00100101001010100101001010100101001010100101001010100101001010100101001010100101001010100"
    keyPressCount = keyPressCount % 88
    if '0' == s[keyPressCount] {
      return "white"
    }
    return "black"
}

