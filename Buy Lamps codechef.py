# cook your dish here
t = int(input())
i = 0
while i < t:
    N,K,X,Y=map(int,input().split())
    if(N==K):
        print(K*X)
    elif(N>K):
        temp=(K*X)#+((N-K)*Y)
        if(X>Y):
            temp+=((N-K)*Y)
            print(temp)
        else:
            temp+=((N-K)*X)
            print(temp)
    #elif(N)
    i+=1