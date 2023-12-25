n=int(input("Enter the number of terms in the series :"))
first=-1
second=1
print("The fibinocci series ",n," terms is : ")
for i in range (0,n):
    current=first+second
    print(current," \t")
    first=second
    second=current
