number = int(raw_input("Enter a number: "))
if number == 2 or number == 3 or number == 5 or number == 7:
    print "Number is prime."
elif number == 1:
    print " Number is neither prime nor composite."
elif number > 3:
    if number % 2 == 0 or number % 3 == 0 or number % 5 == 0 or number % 7 == 0:
        print "Number is composite."
    else:
        print "Number is prime."
