/*
    Problem Code- ITP1_1_C
    Problem Name- Rectangle
    Problem Link- https://onlinejudge.u-aizu.ac.jp/problems/ITP1_1_C
    Description- Write a program which calculates the area and perimeter of a given rectangle.
*/
#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d\n", a * b, 2*(a+b));
    return 0;
}
