temp=int(input("enter num : "))
x=temp
k=0;
def fact(num):
    f=1
    while num > 0:
        f=f*num
        num-=1
    return f    

while x>0:
    a=int(x%10)
    k=k+fact(a)
    x=x//10

if temp==k:
    print(k)
else:
    print("not strong")
