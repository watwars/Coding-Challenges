lim = 100

sum_of_square = 0
for i in range(lim + 1):
    sum_of_square += i**2

sum_to_lim = lim * (lim + 1) / 2
square_of_sum = sum_to_lim**2

print(square_of_sum - sum_of_square)
