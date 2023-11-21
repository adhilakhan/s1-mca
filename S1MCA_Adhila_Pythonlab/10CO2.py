n=int(input("Enter any number : "))
a=n//2
print("Factors of the number are : ",end=" ")
for i in range (1,a+1):
    if (n%i)==0:
        print(i,end=" ")
print(n)