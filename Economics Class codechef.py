for i in range(int(input())):
    n = int(input())
    s = list(map(int,input().strip().split()))
    d = list(map(int,input().strip().split()))
    res = 0
    for j in range(n):
        if s[j]==d[j]:
            res+=1
    print(res)
        