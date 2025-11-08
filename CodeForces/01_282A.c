/*
    Problem Code: 282A 
    Problem Name: Bit++
    Problem Link: https://codeforces.com/problemset/problem/282/A
    Description:
    The problem is to determine the final value of a variable after a series of increment and decrement operations.
*/

#include <stdio.h>
#include <string.h>
 
int main(){
    int n, x = 0;
    char stat[5];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", stat);
        if(strstr(stat,"++")){
            x++;
        }else if(strstr(stat,"--")){
            x--;
        }
    }
    printf("%d\n", x);
    return 0;
}