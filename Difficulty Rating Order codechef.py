t = int(input())

while t > 0:
    n = int(input())
    arr=list(map(int, input().split()))
    flag=1    
    for i in range(1,len(arr)-1):
        if (arr[i]>arr[i+1]):
            flag=0
            break

    if(flag==1):
        print("Yes")
    else:
        print("No")
    t=t-1


