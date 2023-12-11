class rectangle:
    def __init__(self,l=0,b=0):
        self.l=l
        self.b=b
    def premeter(self):
        return 2*(self.l+self.b)
    def area(self):
        return self.l*self.b
    def __gt__(self,other):
        if self.area()>other.area():
            return True
        else:
            return False
    def display(self):
        print("Legnth : ",self.l)
        print("breadth : ",self.b)
        
a=int(input("Enter the lenght of the rectangle 1 : "))
c=int(input("Enter the breadth of the rectangle 1 : "))
rect1=rectangle(a,c)
p=int(input("\nEnter the lenght of the rectangle 2 : "))
q=int(input("Enter the breadth of the rectangle 2 : "))
rect2=rectangle(p,q)
print("\n Rectangle 1 ")
rect1.display()
print("\n Rectangle 2 ")
rect2.display()
if rect1<rect2:
    print("\nThe second rectangle have greater area than the first ")
else:
    print("\nThe first rectangle have greater area than the second ")