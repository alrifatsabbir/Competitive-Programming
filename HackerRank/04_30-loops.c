/*
    Problem Code: 30-loops
    Problem Name: Loops
    Problem Link: https://www.hackerrank.com/challenges/30-loops/problem
    Description: Print the first 10 multiples of a given integer.
*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}