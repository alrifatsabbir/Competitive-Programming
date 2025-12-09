/*
    Problem Code- sqrtx
    Problem Name- Sqrt(x)
    Problem Link- https://leetcode.com/problems/sqrtx/
    Description- Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned 
    integer should be non-negative as well. You must not use any built-in exponent function or operator.
*/
#include <stdio.h>
#include <math.h>

int mySqrt(int x){
    return sqrt(x);
}

int main(){
    int x;
    scanf("%d", &x);
    printf("%d\n", mySqrt(x));
    return 0;
}