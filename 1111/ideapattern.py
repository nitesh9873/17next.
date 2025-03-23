num=1
for i in range(5):
    for j in range(5-i-1):
        print(i+j,end="")
    print("\n")
    
    for k in range(2*i+1):
        print("5",end="")
        print()