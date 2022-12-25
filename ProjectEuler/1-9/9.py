
def solution(lim):
    for a in range(1, lim):
        for b in range(1, lim):
            for c in range(1, lim):
                if a * a + b * b == c * c:
                    s = a + b + c
                    if s != 0 and lim % s == 0:
                        diff = int(lim / s)
                        print(a * b * c * diff * diff * diff)
                        return


solution(1000)
