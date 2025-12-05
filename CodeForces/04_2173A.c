/*
    Problem Code- 2173A
    Problem Name- Sleeping Through Classes
    Problem Link- https://codeforces.com/contest/2173/problem/A
    Description- Each test contains multiple test cases. The first line contains the number of test cases t(1≤t≤500). 
    The description of the test cases follows.The first line of each test case contains two integers n and k(1≤n,k≤100).
    The second line of each test case contains the string s of length n (si=0 or 1).
*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        char s[105];
        scanf("%s", s);

        int awake[105] = {0};

        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                for(int j = i; j <= i + k && j < n; j++) {
                    awake[j] = 1;
                }
            }
        }

        int sleep = 0;
        for(int i = 0; i < n; i++) {
            if(awake[i] == 0) sleep++;
        }

        printf("%d\n", sleep);
    }

    return 0;
}
