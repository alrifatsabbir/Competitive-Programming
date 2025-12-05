/*
    Problem Code- power_of_four
    Problem Name- Power of Four
    Problem Link- https://leetcode.com/problems/power-of-four/
    Description- Given an integer n, return true if it is a power of four. Otherwise, return false. An integer n is a 
    power of four, if there exists an integer x such that n == 4x.
*/

#include <stdio.h>
#include <stdbool.h>

bool isPowerOfFour(int n) {
    if (n <= 0) return false;
    if (n == 1) return true;
    return (n % 4 == 0) && isPowerOfFour(n / 4);
}

int main() {
    int n;
    scanf("%d", &n);

    if (isPowerOfFour(n))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}

// LeetCode code ->
/*
bool isPowerOfFour(int n) {
    int x;
    if (n == 0) {
        return false;
    }
    if (n == 1) {
        return true;
    }
    if (n > 1) {
        return n % 4 == 0 && isPowerOfFour(n / 4);
    }else {
        return false;
    }
}
*/