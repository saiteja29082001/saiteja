x = int(input("enter number : "))
k=0
while x>0:
    b=x%10
    k+=b
    x//=10
print(k)    
   
