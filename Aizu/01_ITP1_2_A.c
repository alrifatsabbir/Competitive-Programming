/*
    Problem Code: ITP1_2_A
    Problem Name: Small, Large, or Equal
    Problem Link: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_A
    Description: Write a program which prints small/large/equal relation of given two integers a and b.
*/

#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a < b){
        printf("a < b\n");
    }
    else if(a > b){
        printf("a > b\n");
    }
    else if(a == b){
        printf("a == b\n");
    }

    return 0;
}
