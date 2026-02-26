/*
    Problem Code- 2205A
    Problem Name- Simons and Making It Beautiful
    Problem Link- https://codeforces.com/contest/2205/problem/A
    Description- Find a permutation q that can be obtained from p by performing the above operation at most once, such that the number of ugly 
    indices in q is minimized.
*/
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int p[505];

        for (int i = 0; i < n; i++) {
            scanf("%d", &p[i]);
        }

        int pos = 0;
        for (int i = 0; i < n; i++) {
            if (p[i] == n) {
                pos = i;
                break;
            }
        }
        int temp = p[0];
        p[0] = p[pos];
        p[pos] = temp;
        
        for (int i = 0; i < n; i++) {
            printf("%d ", p[i]);
        }
        printf("\n");
    }

    return 0;
}
