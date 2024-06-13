x=int(input("enter num : "))
k=0;
while x>0:
    a=int(x%10)
    k=k*10+a
    x=x//10
print(k)

