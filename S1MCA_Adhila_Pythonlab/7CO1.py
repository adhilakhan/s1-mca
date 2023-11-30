n1=int(input("Enter the number of elements in the first list :"))
list1=[]
print("enter the elements to the list :")
for i in range (0,n1):
    element=input()
    list1.append(element)
print(list1)
n2=int(input("Enter the number of elements in the first list :"))
list2=[]
print("enter the elements to the list :")
for i in range (0,n2):
    element=input()
    list2.append(element)
print(list2)
if len(list1)==len(list2):
    print("Lists are of same length")
else:
    print("Lists are not of the same lenght")
sum1=0
sum2=0
for x in list1:
    sum1=sum1+int(x)
for y in list2:
    sum2=sum2+int(y)
if sum1==sum2:
    print("Both the ist have equal sums")
else:
    print("Both list have unequal sums")
s=0
print("The same elements in the list are : ")
for x in list1:
        if x in list2:
            print(x,end=" ")
            s=int(s)+1
if s==0:
    print("The list have no common elements ")