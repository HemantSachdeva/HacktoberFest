age_01 = int(input('Enter the age of 1st person :: '))
age_02 = int(input('\nEnter the age of 2nd person :: '))
age_03 = int(input('\nEnter the age of 3rd person :: '))

max_age = (age_01 if (age_01 > age_02 and age_01 > age_03) 
	else (age_02 if(age_02 > age_03 and age_02 > age_01) else age_03))

print('\n\nThe maximum age is :: ', max_age)

min_age = (age_01 if (age_01 < age_02 and age_01 < age_03) 
	else (age_02 if(age_02 < age_03 and age_02 < age_01) else age_03))

print('\nThe minimum age is :: ', min_age)

# simple logic

# age_01 = int(input('Enter the age of 1st person :: '))
# age_02 = int(input('\nEnter the age of 2nd person :: '))
# age_03 = int(input('\nEnter the age of 3rd person :: '))


# if age_01 > age_02 and age_01 > age_03:
# 	oldest = age_01

# elif age_02 > age_01 and age_02 > age_03:
# 	oldest = age_02

# else:
# 	oldest = age_03

# print('\n\nThe Maximum age is :: ', oldest)


# # for youngest age
# if age_01 < age_02 and age_01 < age_03:
# 	youngest = age_01

# elif age_02 < age_01 and age_02 < age_03:
# 	youngest = age_02

# else:
# 	youngest = age_03

# print('\n\nThe Minimum age is :: ', youngest)