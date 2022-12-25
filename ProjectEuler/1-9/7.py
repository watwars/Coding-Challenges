import math


def is_prime(val):
    if val == 2:
        return True

    for i in range(3, int(math.sqrt(val)) + 1, 2):
        if val % i == 0:
            return False

    return True


lim = 10001

current = 5
index = 2

while index < lim:
    if is_prime(current):
        index += 1
    current += 2


print(current - 2)
print(index)
