
# ternary method

num1 = int(input('Enter the number 1::'))
num2 = int(input('\nEnter the number 2::'))
num3 = int(input('\nEnter the number 3::'))

max = (num1 if (num1 > num2 and num1 > num3) else (num2 if(num2 > num3 and num2 > num1) else num3))

print('\n\nThe maximum number is ::', max)



#with pre-define functions
# a = int(input('Enter the number A::'))
# b = int(input('\nEnter the number B::'))
# c = int(input('\nEnter the number C::'))

# print("\nThe greatest number is :: ", max(a, b, c))
# print("\nThe minimum number is:: ", min(a, b, c))


# simple method
# a = int(input('Enter the number A::'))
# b = int(input('\nEnter the number B::'))
# c = int(input('\nEnter the number C::'))

# if a > b and a > c:
#   print('\n\nThe greatest is A',a)

# elif b > c and b > a:
#   print('\n\nThe greatest is B::',b) 

# else:
#   print('\n\nThe greatest is C::', c)
