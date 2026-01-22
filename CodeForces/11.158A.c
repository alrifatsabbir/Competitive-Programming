/*
    Problem Code- 158A
    Problem Name- Next Round
    Problem Link- https://codeforces.com/problemset/problem/158/A
    Description- "Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, 
    as long as the contestant earns a positive score..." — an excerpt from contest rules. A total of n participants took part in the contest 
    (n ≥ k), and you already know their scores. Calculate how many participants will advance to the next round.
*/
#include <stdio.h>
int main(){
    int n,k,i;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int cutoff = arr[k - 1];
    int count = 0;
    for(i = 0; i < n; i++){
        if(arr[i] >= cutoff && arr[i] > 0){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}