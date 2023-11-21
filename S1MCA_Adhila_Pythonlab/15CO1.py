clr1=input("Enter the first list if colors : ")
clr2=input("Enter the second list if colors : ")
cl1=clr1.split(" ")
cl2=clr2.split(" ")
colr1=set(cl1)
colr2=set(cl2)
r=colr1.difference(colr2)
print("colors from colorlist1 not contained in colorlist2 is : ",r)

