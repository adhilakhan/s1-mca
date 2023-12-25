import csv
dl=[]
n=int(input("Enteer the Number of dictionaries : "))
for i in range (n):
    strs=input("Enter the key value pairs saparated with commas : ")
    l=list(strs.split(","))    
    d=dict(x.split(":") for x in l)
    dl.append(d)
field=list(d.keys())
f=open("new.csv","w")
fwriter=csv.DictWriter(f,fieldnames=field)
fwriter.writeheader()
fwriter.writerows(dl)
f.close()
F=open("new.csv","r")
row=[]
freader=csv.reader(F)
for x in freader:
    print(x)