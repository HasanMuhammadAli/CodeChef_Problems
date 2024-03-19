t = int(input())
i = 0
while i < t:
    H,X,Y=map(int, input().split())
    a=H-Y   #special attack use
    if(a%X==0): 
        print((a//X)+1)
    else:
        print((a//X)+2)
    i += 1

