/*
    Problem Code- power_of_two
    Problem Name- Power of Two
    Problem Link- https://leetcode.com/problems/power-of-two/
    Description- Given an integer n, return true if it is a power of two. Otherwise, return false. An integer n is a 
    power of two, if there exists an integer x such that n == 2x.
*/

#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    if (n == 1) return true;
    return (n % 2 == 0) && isPowerOfTwo(n / 2);
}

int main() {
    int n;
    scanf("%d", &n);

    if (isPowerOfTwo(n))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}


// LeetCode code ->
/*
bool isPowerOfTwo(int n) {
    int x;
    if (n == 0) {
        return false;
    }
    if (n == 1) {
        return true;
    }
    if (n > 1) {
        return n % 2 == 0 && isPowerOfTwo(n / 2);
    }else {
        return false;
    }
}
*/