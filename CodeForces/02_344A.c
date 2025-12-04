/*
    Problem Code- 344A
    Problem Name- Magnets
    Problem Link- https://codeforces.com/problemset/problem/344/A
    Description- The first line of the input contains an integer n (1 ≤ n ≤ 100000) — the number of magnets. 
    Then n lines follow. The i-th line (1 ≤ i ≤ n) contains either characters "01", if Mike put the i-th magnet 
    in the "plus-minus" position, or characters "10", if Mike put the magnet in the "minus-plus" position.
*/

#include <stdio.h>

int main(){
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        if(arr[i] != arr[i+1]){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}