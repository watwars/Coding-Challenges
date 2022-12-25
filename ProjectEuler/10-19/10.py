import math


def is_prime(val):
    if val == 2:
        return True

    for i in range(3, int(math.sqrt(val)) + 1, 2):
        if val % i == 0:
            return False

    return True


lim = 2000000

result = 5

current = 5

while current < lim:
    print(current)
    if is_prime(current):
        result += current
    current += 2


print(result)
