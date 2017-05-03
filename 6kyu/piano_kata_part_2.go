// Piano Kata, Part 2 6th kyu kata

package kata

func WhichNote(keyPressCount int) string {
  var keys = []string{"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"}
  keyPressCount = (keyPressCount - 1) % 88 % 12
  return keys[keyPressCount]
}

