def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        prod = n * factorial(n - 1)
        return prod
#main

num = int(raw_input("Enter a number: "))
print factorial(num)
