salary = int(input('Enter the salary of the employee:: '))
work_year = int(input('\nEnter the number of years the employee has work in company:: '))

if work_year > 5:
	bonus = salary * 0.05  # 5 percent bonus on salary
	print('\nThe bonus you get on your salary is :: ', int(bonus))
	print('\nYour net salary will be::', salary + bonus)

else:
	print("\nYou do not get bonus and your salary will be same")
