class Publisher:
    def __init__(self,nm):
        self._name=nm
    def display(self):
        print("Publisher name : ",self._name)
    
class Book(Publisher):
    def __init__(self,nm,titl,auth):
        super().__init__(nm)
        self._title=titl
        self._author=auth
    def display(self):
        super().display()
        print("Book Title : ",self._title)
        print("Book Author : ",self._author)

class Pyhton(Book):
    def __init__(self,nm,titl,auth,prc,nopg):
        super().__init__(nm,titl,auth)
        self._price=prc
        self._npages=nopg
    def display(self):
        super().display()
        print("Book Price : ",self._price)
        print("Number of Pages : ",self._npages)

p=input("Enter the publisher of the book : ")
t=input("Enter the title of the book : ")
a=input("Enter the author of the book : ")
pr=input("Enter the price of the book : ")
np=input("Enter the number of pages in the book : ")
p1=Pyhton(p,t,a,pr,np)
print("\nThe entered book details are : ")
p1.display()