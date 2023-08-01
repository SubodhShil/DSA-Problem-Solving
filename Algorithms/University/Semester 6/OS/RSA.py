"""
1. take input of p and q
2. calculate n = p x q
3. generate eulers number, eulerT = (p - 1) * (q - 1)
4. 1 < e < t && gcd(t, e) == 1
5. Find the multiplicative inverse of e modulo eulerT, 
    d = e^-1 * eulerT
"""

import math
p = (int)(input("Enter p: "))
q = (int)(input("Enter q: "))
n = p * q
eulerT = (p - 1) * (q - 1)

for e in range (2, eulerT):
    if(math.gcd(eulerT, e) == 1):
        break

d = pow(e, -1, eulerT)

if d is None:
    print("Unable to find a suitable d. Please choose different p and q.")
else:
    print("Public Key (n, e):", (n, e))
    print("Private Key (n, d):", (n, d))