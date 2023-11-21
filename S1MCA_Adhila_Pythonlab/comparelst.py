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
    print("lists are of same length")
    same=1
    for x in list1:
        for y in list2:
            if x!=y:
                same=0
    if same==1:
        print("the list contains same elements")
    else:
        print("list not contains the same elements")
else:
    print("lists are not the same length")
print("The same elements in the list are : ")
s=0
for x in list1:
    for y in list2:
        if x==y:
            print(x)
        else:
            s=s+1
if(s==n1):
    print("The list have no common elements ")