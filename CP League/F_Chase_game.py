import sys
import math

def solve():
    input = sys.stdin.read().split()
    ptr = 0
    t = int(input[ptr])
    ptr += 1
    for _ in range(t):
        n, x, y, d1, d2 = map(int, input[ptr:ptr+5])
        ptr +=5
        distance = abs(x - y)
        if distance % math.gcd(d1, d2) == 0:
            print("YES")
        else:
            print("NO")

solve()