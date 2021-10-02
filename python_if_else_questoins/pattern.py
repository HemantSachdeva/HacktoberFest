def A():
    for i in range(7):
        for j in range(5):
            if ((j==0 or j==4) and i!=0) or (j>0 and j<4) and (i==0 or i==3):
                print("*",end=" ")
            else:
                print(end="  ")
        print()
A()