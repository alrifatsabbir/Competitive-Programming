# Problem Code- 2179B 
# Problem Name- Blackslex and Showering
# Problem Link- https://codeforces.com/contest/2179/problem/B
# Description- The first line contains one integer t(1≤t≤104) — the number of test cases. The first line of each test case contains one 
# integer n(3≤n≤2⋅105) — the size of the array.The second line contains n integers a1,a2,…,an (1≤ai≤100). It is guaranteed that the sum 
# of n does not exceed 2⋅105 over all test cases.

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    total = sum(abs(a[i] - a[i+1]) for i in range(n-1))
    
    min_time = total
    
    for i in range(n):
        if i == 0:
            time = total - abs(a[0] - a[1])
        elif i == n-1:
            time = total - abs(a[n-2] - a[n-1])
        else:
            gain = abs(a[i-1]-a[i]) + abs(a[i]-a[i+1]) - abs(a[i-1]-a[i+1])
            time = total - gain
        min_time = min(min_time, time)
    
    print(min_time)