
num=int(input("enter a number:"))

if num>1:
    for i in range(2,num-1):
        if num%i==0:
            print("not prime")
            break
        else:
            print("prime")
            
else:
    print("not prime")
                