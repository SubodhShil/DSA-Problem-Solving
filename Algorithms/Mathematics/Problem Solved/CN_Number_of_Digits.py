from os import *
from sys import *
from collections import *
import math


def countDigit(x: int) -> int:
    # handle user input 0
    if x == 0:
        return 1

    # handle negative number
    if x < 0:
        return (int)(math.log10(abs(x))) + 1

    return (int)(math.log10(x) + 1)


print(countDigit(-52352))
