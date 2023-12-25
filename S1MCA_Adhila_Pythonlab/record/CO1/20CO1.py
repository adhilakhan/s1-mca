n=int(input("Enter the number of elements in the list : "))
print("Enter the Elements to the list :")
ls=[]
for i in range (n):
    a=int(input())
    ls.append(a)
ls2=ls.copy()
for x in ls2:
    if x%2==0:
        ls2.remove(x)
print("Old List \n -----------------------------------------\n",ls)
print("List after removing even numbers \n -----------------------------------------\n",ls2)