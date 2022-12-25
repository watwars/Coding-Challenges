
limit = 4000000


def main():
    total = 2
    a = 1
    b = 2
    c = a + b
    while c <= limit:
        c = a + b
        if c > limit:
            break
        if c % 2 == 0:
            total += c
        a = b
        b = c

    print(total)


main()
