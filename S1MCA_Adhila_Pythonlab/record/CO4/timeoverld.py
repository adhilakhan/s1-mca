class time:
    def __init__(self,h=0,m=0,s=0):
        self._hour=h
        self._min=m
        self._sec=s
    def __add__(self,other):
        s=self._sec+other._sec
        m=self._min+other._min
        h=self._hour+other._hour
        while s>=60:
            s=s-60
            m=m+1
        while m>=60:
            m=m-60
            h=h+1
        while h>=24:
            h=h%24
        return h,m,s
    def display(self):
        print(self.hour," : ",self.min," : ",self.sec)
print("Enter the first time in hour ,minute,seconds: ")
a=int(input())
b=int(input())
c=int(input())
t1=time(a,b,c)
print("Enter the second time in hour ,minute,seconds: ")
a=int(input())
b=int(input())
c=int(input())
t2=time(a,b,c)
t3=list(t1+t2)
print("The sum of two times is : ",t3[0]," : ",t3[1]," : ",t3[2])

    