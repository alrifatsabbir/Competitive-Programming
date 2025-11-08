/*
Problem Code: FLOW002
Problem Name: Finding Remainder
Problem Link: https://www.codechef.com/problems/FLOW002
Description:
Given two integers A and B, the task is to find the remainder when A is divided by B.
*/
#include <stdio.h>

int main() {
    int T, A, B;
    scanf("%d", &T);  

    while (T--) {
        scanf("%d %d", &A, &B);
        printf("%d\n", A % B);  
    }

    return 0;
}
