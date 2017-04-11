# Simple Fun #186: Duplicate Phone Numbers 6th kyu kata

from collections import defaultdict
def find_duplicate_phone_numbers(phone_numbers):
  chars = {'a': '2', 'b': '2', 'c': '2',\
           'd': '3', 'e': '3', 'f': '3',\
           'g': '4', 'h': '4', 'i': '4',\
           'j': '5', 'k': '5', 'l': '5',\
           'm': '6', 'n': '6', 'o': '6',\
           'p': '7', 'r': '7', 's': '7',\
           't': '8', 'u': '8', 'v': '8',\
           'w': '9', 'x': '9', 'y': '9'}
  numbers = defaultdict(int)
  result = []
  for i, row in enumerate(phone_numbers):
    row = row.replace("-", "").lower()
    for k, v in chars.items():
      row = row.replace(k, v)
    numbers[row] += 1
  for i, row in enumerate(numbers):
    if numbers[row] > 1:
      temp = row + ":" + str(numbers[row])
      result.append(temp[:3] + "-" + temp[3:])
  return sorted(result)

# with use of maketrans 
from collections import defaultdict
def find_duplicate_phone_numbers(phone_numbers):
  chars = str.maketrans("abcdefghijklmnoprstuvwxy","222333444555666777888999")
  numbers = defaultdict(int)
  result = []
  for i, row in enumerate(phone_numbers):
    row = row.replace("-", "").lower().translate(chars)
    numbers[row] += 1
  for i, row in enumerate(numbers):
    if numbers[row] > 1:
      temp = row + ":" + str(numbers[row])
      result.append(temp[:3] + "-" + temp[3:])
  return sorted(result)

