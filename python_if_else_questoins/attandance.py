class_held = int(input('Enter the classes held :: '))
class_attended = int(input('Enter the classes attended :: '))

percent = float((class_attended / class_held)) * 100

if percent > 75:
	print('\nYou are eligible for examination with percentage of :: %0.2f' %percent)

else:
	print('\nYou are not eligible for examination with percentage of :: %0.2f ' %percent)