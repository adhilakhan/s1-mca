n=int(input("Enter the number of elements in the list :"))
num=[]
print("enter the elements to the list :")
for i in range (0,n):
    element=input()
    num.append(element)
print("The list is ",num)
sum=0
for x in num:
    sum=sum+int(x)
print("the sum of elements in the list is : ",sum)