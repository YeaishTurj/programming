for _ in range(int(input())):
    a,b=map(int,input().split())
    mx=max(a,b)
    mn=min(a,b)
    if a%2==0 and a//2!=b or b%2==0 and b//2!=a: print("Yes")
    else: print("No")