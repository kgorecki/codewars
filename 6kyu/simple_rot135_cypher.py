// Simple ROT13.5 cypher 6th kyu kata
import string
def ROT135(input):
    n = 13
    alpha = string.ascii_lowercase
    a13 = alpha[n:] + alpha[:n]
    Alpha = string.ascii_uppercase
    A13 = Alpha[n:] + Alpha[:n]
    digits = "".join(str(i) for i in range(0,10))
    n = 5
    D5 = digits[n:] + digits[:n]
    trans = str.maketrans(alpha + Alpha + digits, a13 + A13 + D5)
    input = input.translate(trans)
    return input
