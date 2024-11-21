"""
Implementation eines Algorithmus zur Bestimmung der Ziffern von pi.
Gedacht als Geschwindigkeitsvergleich mit der äquivalenten
C-Implementation (pi.c).
"""


# Algorithm:
# https://www.cs.ox.ac.uk/research/pdt/ap/minutes/algprog-20031107.pdf

n_digits = 15000
length = (n_digits//4 + 1)*14

a = [0] * length

acc_carry = 0
prev_digits = 0
base = 10000
is_first_iter = True

for i in range(length, 0, -14):
    for j in range(i-1, 0, -1):
        acc_carry *= j
        acc_carry += (2000 if is_first_iter else a[j]) * base
        g = 2*j - 1
        a[j] = acc_carry % g
        acc_carry //= g
    digits = prev_digits + acc_carry//base
    print(f"{digits:04d}", end="", flush=True)
    acc_carry = prev_digits = acc_carry % base
    is_first_iter = False
