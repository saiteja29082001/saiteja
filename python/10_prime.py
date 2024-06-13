a = int(input("enter num : "))
flag = 0
for i in range(2,a):
    if a%i==0:
        flag=1
        break
if flag == 1:
    print("not prime")
else:     
    print("prime")
