wordlist=input(" Enter the list of words : ")
wl=wordlist.split()
max=0
w=""
for x in wl:
    l=len(x)
    if l>=max:
        max=l
        w=x
print("The lenght of the longest word is ",max," and the word is '",w,"'")