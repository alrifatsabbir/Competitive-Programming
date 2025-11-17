/*
    Problem Code- DIFFSUM
    Problem Name- Sum OR Difference
    Problem Link- https://www.codechef.com/problems/DIFFSUM
    Description- Write a program to take two numbers as input and print their difference if the first number is greater than 
    the second number otherwise print their sum.
*/
#include <stdio.h>

int main() {
	// your code goes here
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    if(n1 > n2){
        printf("%d", n1-n2);
    }
    if(n1 < n2 || n1 == n2){
        printf("%d", n1 + n2);
    }
    return 0;
}

