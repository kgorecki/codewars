# Potion Class 101 6th kyu kata

import math

class Potion:
    def __init__(self, color, volume):
        self.color = list(color)
        self.volume = volume
    
    def mix(self, other):
        newOne = Potion(self.color, self.volume)
        newOne.volume = self.volume + other.volume
        newOne.color[0] = math.ceil((self.color[0] * self.volume + other.color[0] * other.volume) / newOne.volume)
        newOne.color[1] = math.ceil((self.color[1] * self.volume + other.color[1] * other.volume) / newOne.volume)
        newOne.color[2] = math.ceil((self.color[2] * self.volume + other.color[2] * other.volume) / newOne.volume)
        return newOne
