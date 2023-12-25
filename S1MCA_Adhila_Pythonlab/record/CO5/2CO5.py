f=open("demo.txt", "r")
f1=open("demo1.txt","w")
i=1
for x in f :
    if i%2==1:
        f1.write(x)
    i=i+1
f.close()
f1.close()
f=open("demo.txt","r")
f1=open("demo1.txt","r")
print("\n File demo.txt \n --------------------------------------------------------")
print(f.read())
print("\n File demo1.txt \n --------------------------------------------------------")
print(f1.read())
f1.close()
f.close()