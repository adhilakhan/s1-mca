class account:
    def __init__(self,accno="",accnm="",acctp="",bal=0):
        self.accno=accno
        self.accnm=accnm
        self.acctype=acctp
        self.balance=bal
    def withdraw(self,amount):
        if self.balance<amount:
            print("Your account hve no sufficient balance,Withdrawal not possible!!!")
        else:
            self.balance=self.balance-amount
            print("\n The details of withdrawal is : ")
            self.display()
    def deposit(self,amount):
        self.balance=self.balance+amount
    def display(self):
        print("\n Account Number : ",self.accno)
        print("Account Name : ",self.accnm)
        print("Account Type : ",self.acctype)
        print("Account Balane : ",self.balance)
name=input("Enter the name of the account holder : ")
n=input("Enter the number of the account : ")
typee=input("Enter the type of the account : ")
bal=int(input("Enter the balance in the account : "))
acc=account(n,name,typee,bal)
print("Choose any one of the operations below ")
print("-----------------\n 1.Deposit \n 2.Withdraw \n 3.Display \n 4.Exit")
while 1:
    ch=int(input("\n Enter any one of the operations : "))
    if ch==1:
        am=int(input("\n Enter the amount to be deposited : "))
        acc.deposit(am)
        print("\n The details of deposit is : ")
        acc.display()
    elif ch==2:
        am=int(input("\n Enter the amount to be withdrawn : "))
        acc.withdraw(am)
    elif ch==3:
        print("\n The accountdetails are : ")
        acc.display()
    elif ch==4:
        exit()
    else:
        print("Not A Valid Choice")