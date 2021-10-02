marks = int(input("Enter the marksof the students :: "))

if marks < 25:
	print('Your grade is :: F')

elif marks in range(25, 45):
	print("Your grade is :: E")

elif marks in range(45, 50):
	print("Your grade is :: D")

elif marks in range(50, 60):
	print("Your grade is :: C")

elif marks in range(60, 80):
	print("Your grade is :: B")

else:
	print("Your grade is :: A")
	
	
	
# marks = int(input('Enter the marks of student :: '))

# if marks < 25:
# 	print('Your grade is :: F')
# elif marks >= 25 and marks <= 45:
# 	print('Your grade is :: E')
# elif marks >= 45 and marks <= 50:
# 	print('Your grade is :: D')
# elif marks >= 50 and marks <= 60:
# 	print('Your grade is :: C')
# elif marks >= 60 and marks <= 80:
# 	print('Your grade is :: B')
# else:
# 	print('Your grade is :: A')
