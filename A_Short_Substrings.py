for _ in range(int(input())):
    s=input()
    for i in range(len(s)):
        if i%2==0: print(s[i],end="")
    print(s[-1])