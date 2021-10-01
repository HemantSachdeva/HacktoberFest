quantity = int(input('Enter the purchase quantity:: '))

cost = quantity * 100

if quantity > 1000:
	discount = cost * 0.10  #10 percent discount on product if quantity is more than 1000
	new_cost = cost - discount
else:
	new_cost = cost

print('\nThe cost on the purchase is::', int(new_cost))
