/*
    Problem Code- powx-n
    Problem Name- Pow(x,n)
    Problem Link- https://leetcode.com/problems/powx-n/
    Description- Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
*/
#include <stdio.h>
#include <math.h>

double myPow(double x, int n) {
    return pow(x,n);
}

int main(){
    double x;
    int n;
    scanf("%lf %d", &x, &n);
    printf("%.5f\n", myPow(x,n));
    return 0;
}