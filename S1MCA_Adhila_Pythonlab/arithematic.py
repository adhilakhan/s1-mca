print("\n ARITHMETIC OPERATION ")
print("-----------------------------------------")
print(" 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5.Exit\n ")
print(" Enter the two intergers : ")
a=int(input())
b=int(input())
c=int(input("Enter your choice :"))
if c==1:
	print(a,"+",b,"=",a+b)
elif c==2:
	print(a,"-",b,"=",a-b)
elif c==3:
	print(a,"*",b,"=",a*b)
elif c==4:
	print(a,"/",b,"=",a/b)
elif c==5:
	print("The program exited !!!!")
else:
	print("Invalid choice")

