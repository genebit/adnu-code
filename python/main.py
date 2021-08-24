import math
import os
import random


# If n is odd, print Weird
# If n is even and in the inclusive range of 2 to 5, print Not Weird
# If n is even and in the inclusive range of 6 to 20, print Weird
# If n is even and greater than 20, print Not Weird

if __name__ == '__main__':
    n = int(input())

    if n%2==0 in range(2, 6) or n>20:
        print('Not Weird')
    else:
        print('Weird')
