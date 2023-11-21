file=input("Enter any file name : ")
p=file.find(".")
p=p+1
print("entered filename is : ",file)
print("The extention of the entered file name is : ",file[p:])