for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    c1=c2=0
    for i in range(n):
        if i&1 and a[i]%2==0: c1+=1
        elif i%2==0 and a[i]&1: c2+=1
    if c1==c2: print(c1)
    else: print(-1)