/*
    Problem Code- 69A
    Problem Name- Young Physicist
    Problem Link- https://codeforces.com/problemset/problem/69/A
    Description- The first line contains a positive integer n (1 ≤ n ≤ 100), then follow n lines containing three integers 
    each: the xi coordinate, the yi coordinate and the zi coordinate of the force vector, applied to the body 
    ( - 100 ≤ xi, yi, zi ≤ 100).
*/

#include <stdio.h>

int main(){
    int n,x,y,z;
    int i=0, j=0, k=0;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d %d", &x, &y, &z);
        i+=x;
        j+=y;
        k+=z;
    }
    if(i == 0 && j == 0 && k == 0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}

