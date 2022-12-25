

seen = {}


def getDivisorSum(n):
    result = 0
    for i in range(1, int(n**0.5)+1):
        if n % i == 0:
            if i == n // i:
                result += i
            else:
                result += i
                if i != 1:
                    result += n // i
    return result


result = 0
for i in range(1, 10000):
    if i in seen:
        continue

    a = getDivisorSum(i)
    if a > i:
        b = getDivisorSum(a)
        if b == i:
            result += i
            result += a
            seen[i] = True
            seen[a] = True

print(result)
