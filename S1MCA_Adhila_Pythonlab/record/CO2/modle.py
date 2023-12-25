def numpattern(n):
    for x in range (1,n+1):
        for y in range(1,x+1):
            print(x*y,end=" ")
        print("\n")
     
def starpattrn(n):
    for x in range(1,n+1):
        for y in range(1,x+1):
            print("* ",end=" ")
        print("\n")
    for x in  reversed(range(1,n)):
        for y in range(1,x+1):
            print("* ",end=" ")
        print("\n")