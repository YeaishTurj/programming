for _ in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    a.sort()
    b.sort(reverse=True)
    res=sum(a)
    cnt=0
    for i in range(n):
        if a[i]<b[i] and cnt<k:
            res-=a[i]
            res+=b[i]
            cnt+=1
    print(res)