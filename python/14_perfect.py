x=int(input("enter num : "))
k=0
for i in range(1,x):
    if x%i==0:
        k+=i
if x==k:
    print("perfect")
else:
    print("not perfect")



