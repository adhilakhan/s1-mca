class listoperation:
    def __init__(self,ls=[]):
        self.List=ls
    def display(self):
        print(self.List)
    def Insert(self,a):
        self.List.append(a)
    def Delete(self,a):
        self.List.remove(a)
l=listoperation()
print("\n------------List Operations------------\n 1. Insert Element \n 2. Delete Element \n 3. Display List \n 4. Exit \n")
while 1 :
    ch=int(input("\n Enter any one of the operations : "))
    if ch==1:
        a=input("\n Enter the item to be inserted : ")
        l.Insert(a)
    elif ch==2:
        a=input("\n Enter the item to be deleted : ")
        l.Delete(a)
    elif ch==3:
        print("\n The elements in the list are : ")
        l.display()
    elif ch==4:
        exit()
    else:
        print("Not A Valid Choice")