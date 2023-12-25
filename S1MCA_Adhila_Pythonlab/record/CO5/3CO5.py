import csv
field=[]
row=[]
f=open("student.csv")
freader=csv.reader(f)
field=next(freader)
for x in freader:
    lstel=",".join(map(str,x))
    row.append(lstel)
print(field,"\n",row)
