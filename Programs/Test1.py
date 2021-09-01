A = int(raw_input())
l1 = []
for i in range(0,A):
    ans = i + 1
    if (ans % 3 == 0 and ans % 5 == 0):
        ans = "FizzBuzz"
    elif ans % 3 == 0:
        ans = "Fizz"
    elif ans % 5 == 0:
        ans = "Buzz"
    l1.append(ans)
print l1
