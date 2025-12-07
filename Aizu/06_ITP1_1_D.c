/*
    Problem Code- ITP1_1_D
    Problem Name- Watch
    Problem Link- https://onlinejudge.u-aizu.ac.jp/problems/ITP1_1_D
    Description- Write a program which reads an integer S[second] and converts it to h:m:s where h, m, s denote 
    hours, minutes (less than 60) and seconds (less than 60) respectively.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int h, m, s;
    scanf("%d", &s);
    h = abs((s/60)/60);
    m = abs((s - (h*60*60))/60);
    s = s - (h*60*60+(m*60));
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}
