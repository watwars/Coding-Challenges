
# function that determines if a number is a palindrome
def isPalindrome(num):
    # convert number to string
    n = str(num)
    # reverse the string
    n = n[::-1]
    # convert the string back to an int
    n = int(n)
    # if the number is the same as the original number, return true
    if n == num:
        return True
    # if the number is not the same as the original number, return false
    else:
        return False


largest = 0
for i in range(999, 1, -1):
    # stop = False
    for j in range(999, 1, -1):
        if isPalindrome(i * j) and i * j > largest:
            largest = i * j
            break

print(largest)
