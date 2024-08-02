def solve():
    xl=input()
    sl=input()
    x=input()
    s=input()
    cnt=0
    print(xl,sl)

    while s not in x:
        if cnt>625:
            print(-1)
            return
        x+=x
        cnt+=1
    print(cnt)
    return





if __name__ == '__main__':
    # data = input().strip().split()
    t = int(input())
    for _ in range(t):
        solve()