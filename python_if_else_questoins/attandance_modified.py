class_held = int(input('Enter the classes held :: '))
class_attended = int(input('\nEnter the classes attended :: '))

medical_cause = input('\nDo you hsve any medial cause(y / n) :: ')

percent = float((class_attended / class_held)) * 100

if percent > 75 or medical_cause == 'y':
	print('\nYou are eligible for examination with percentage of :: ', percent)

else:
	print('\nYou are not eligible for examination with percentage of :: ', percent)