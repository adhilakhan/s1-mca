nstr=input("Enter any string : ")
newstr=""
newstr=newstr+nstr
if newstr[-3:]=="ing":
    newstr=newstr+"ly"
else:
    newstr=newstr+"ing"
print("Old String : ",nstr)
print("New String : ",newstr)