import csv
f=open("student.csv")
field=[]
col=[]
freader=csv.reader(f)
field=next(freader)
nof=len(field)
p=int(input("Enter position of the desired column : "))
if p-1<nof:
    for x in freader:
        col.append(x[p-1])
    print( "The desired column is : ", field[p-1]," : ",col)
else:
    print("Not a valid position!!!!")