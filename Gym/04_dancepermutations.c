/*
    Problem Code- 103886D
    Problem Name- Dance Permutations
    Problem Link- https://codeforces.com/gym/103886/problem/D
    Description- The Global Cereal Festival (GCF) is happening at CerealLand! GCF will have n (1≤n≤18) 
    attendees, labeled 1…n. In order to engage the crowd, one of the organizers of GCF, Jesse, decides 
    to get them to perform the permutation dance. In this dance, the attendees stand from left to right, 
    and then permute themselves in every possible manner, from the smallest lexicographic position to the 
    largest lexicographic position. A permutation a of length n is lexicographically smaller than a string 
    b of length n if and only if the following holds:
    In the first position where a and b differ, a has a number that is less than the corresponding letter in b.
    For example, if n=3, the attendees would permute themselves in this order:
    [1,2,3]→[1,3,2]→[2,1,3]→[2,3,1]→[3,1,2]→[3,2,1].
    Jesse is interested in knowing the sum of the distances attendee 1 moves between successive permutations.
*/

#include <stdio.h>

long long recursive(int n) {
    if(n == 1) return 0;
    return (long long)(n-1) * (recursive(n-1) + 1) + (long long)(n-2) * (n-3);
}

int main() {
    int n;
    scanf("%d", &n);
    if(n == 1) {
        printf("0\n");
    } else {
        printf("%lld\n", recursive(n));
    }
    return 0;
}