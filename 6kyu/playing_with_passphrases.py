# Playing with passphrases 6th kyu kata

import string
def play_pass(s, n):
    alpha = string.ascii_uppercase
    alpha_rot = alpha[n:] + alpha[:n]
    trans = str.maketrans(alpha, alpha_rot);
    s = s.translate(trans)
    result = ""
    i = 0
    for c in s:
      if c.isdigit():
        c = str(9 - int(c))
      elif i % 2 == 1:
        c = c.lower()
      result = c + result
      i += 1
    return result

# or using range:
import string
def play_pass(s, n):
    alpha = string.ascii_uppercase
    alpha_rot = alpha[n:] + alpha[:n]
    digits = "".join(str(i) for i in range(0,10))
    trans = str.maketrans(alpha + digits, alpha_rot + digits[::-1]);
    s = s.translate(trans)
    result = ""
    i = 0
    for c in s:
      if i % 2 == 1:
        c = c.lower()
      result = c + result
      i += 1
    return result

