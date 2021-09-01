number = int(raw_input("Enter your number: "))
l = len(str(number))
temp = number 
revnum = 0
for i in range(0,l):
    j = temp % 10
    revnum += j * 10 ** (l - i - 1)
    temp = temp / 10
    #return revnum
if revnum == number:
    print "Number is a palindrome."
else:
    print "Number is not a palindrome."
    

    
