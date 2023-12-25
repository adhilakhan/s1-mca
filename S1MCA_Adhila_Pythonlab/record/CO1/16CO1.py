a=input("Enter the first string : ")
b=input("Enter the second string : ")
temp=""
temp=a[0]+b[1]+a[2:]+" "+b[0]+a[1]+b[2:]
print("The new string is : ",temp)