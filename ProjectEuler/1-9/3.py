import math

num = 600851475143
# num = 13195


def is_prime(val):
    if val == 2:
        return True

    for i in range(3, int(math.sqrt(val)) + 1, 2):
        if val % i == 0:
            return False

    return True


for i in range(3, num, 2):
    if num % i == 0:
        val = int(num / i)
        if is_prime(val):
            print(val)
            break
