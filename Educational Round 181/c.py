def solve():
    l=int(input())
    r=int(input())
    ans=r-l+1

    
    for i in range((l // 2) * 2, r + 1, 2):
        if i < l:
            continue
        ans -= 1

    
    index = (l // 3) * 3
    if index % 2 == 0:
        index += 3
    for i in range(index, r + 1, 6):
        if i < l:
            continue
        ans -= 1

    
    index = (l // 5) * 5
    if index % 2 == 0:
        index += 5
    for i in range(index, r + 1, 10):
        if i < l:
            continue
        if i % 3 != 0:
            ans -= 1

    
    index = (l // 7) * 7
    if index % 2 == 0:
        index += 7
    for i in range(index, r + 1, 14):
        if i < l:
            continue
        if i % 3 != 0 and i % 5 != 0:
            ans -= 1

    print(ans - 1)
        


tt=int(input())
while(tt>0):
    tt-=1
    solve()

