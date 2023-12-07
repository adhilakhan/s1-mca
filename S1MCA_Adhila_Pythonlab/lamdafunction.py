x = lambda a : a*a
y = lambda p,q : p*q
z = lambda b,h : (1/2)*b*h
a=int(input("Enter the side of the square : "))
l=int(input("Enter the length of the rectangle : "))
b=int(input("Enter the breadth of the rectangle : "))
h=int(input("Enter the height of the triangle : "))
bl=int(input("Enter the base lenght of the triangle : "))
print("area of square : ",x(a))
print("area of rectangle : ",y(b,l))
print("area of triangle : ",z(bl,h))