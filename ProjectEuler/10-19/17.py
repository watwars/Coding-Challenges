

DIGITS = ["", "one", "two", "three", "four",
          "five", "six", "seven", "eight", "nine"]
TENTH = {
    10: "ten",
    11: "eleven",
    12: "twelve",
    13: "thirteen",
    14: "fourteen",
    15: "fifteen",
    16: "sixteen",
    17: "seventeen",
    18: "eighteen",
    19: "nineteen",
    20: "twenty",
}

TEN = {
    20: "twenty",
    30: "thirty",
    40: "forty",
    50: "fifty",
    60: "sixty",
    70: "seventy",
    80: "eighty",
    90: "ninety",
    100: "hundred",
}

result = 0


for i in range(1, 1001):
    word = ""
    if i == 1000:
        word = "onethousand"
        result += len(word)
        continue
    if i % 100 == 0:
        word = DIGITS[i // 100] + "hundred"
        result += len(word)
        continue

    if i > 100:
        word += DIGITS[i // 100] + "hundredand"

    rem = i % 100
    if rem < 10:
        word += DIGITS[rem]
    elif rem <= 20:
        word += TENTH[rem]
    else:
        word += TEN[rem // 10 * 10] + DIGITS[rem % 10]

    print(word)

    result += len(word)
print(result)
