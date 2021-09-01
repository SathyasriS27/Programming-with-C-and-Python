def gcd(a,b):
    '''if a > b:
        rem = a % b
        return gcd(b,rem)
    if a == 0:
        return b
    if b > a:
        rem = b % a
        return gcd(a,rem)'''
    if b == 0:
        return a
    return gcd(b,a%b)

#main
first_num = int(raw_input("Enter first number: "))
second_num = int(raw_input("Enter second number: "))
print gcd(first_num,second_num)
        
