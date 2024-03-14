cases=int(input())
while cases>0:
    X=int(input())
    Y=int(input())
    if X*Y>=100:
        print (int((X*Y)/100))
    else:
        print ("0")
    cases=cases-1       