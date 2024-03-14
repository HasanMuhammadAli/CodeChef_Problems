t = int(input())
i = 0
while i < t:
    x1,x2,y1,y2=map(int, input().split())
    if((y1//x1)>(y2//x2)):
        number=1
        print(number)
    elif((y1x1)<(y2//x2)):
        number=-1
        print(number)
    else:
        number=0
        print(number)
    i += 1

