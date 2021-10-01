for r in range(6):
  for c in range(7):
    if((r == 0 and c % 3 != 0) or ((r > 0 and r < 3) and c % 1 == 0) or (r == 3 and (c > 0 and c < 6)) or (r == 4 and (c > 1 and c < 5)) or (r == 5 and c == 3)):
       print("*", end = ' ')
    else:
      print(" ", end = ' ')
  print('')
       
