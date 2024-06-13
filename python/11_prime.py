x = int(input("enter x : "))
y = int(input("enter y : "))
i=2
flag = 0
for x in range (x,y+1):
    for i in range (2,x):
        if x % i == 0:
            flag = 1
        i+=1    
    if flag == 0:
        print(x)
    i=2    
    x+=1
    flag = 0

            


