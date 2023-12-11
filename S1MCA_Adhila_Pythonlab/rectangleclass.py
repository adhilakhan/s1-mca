class rectangle:
    def __init__(self,l=0,b=0):
        self.l=l
        self.b=b
    def premeter(self):
        return 2*(self.l+self.b)
    def area(self):
        return self.l*self.b
a=int(input("Enter the lenght of the rectangle : "))
c=int(input("Enter the breadth of the rectangle : "))
rect=rectangle(a,c)
print("Peremeter of rectangle = ",rect.premeter())
print("Area of rectangle = ",rect.area())