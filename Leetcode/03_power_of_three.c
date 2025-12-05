/*
    Problem Code- power_of_three
    Problem Name- Power of Three
    Problem Link- https://leetcode.com/problems/power-of-three/
    Description- Given an integer n, return true if it is a power of three. Otherwise, return false. An integer n is a 
    power of three, if there exists an integer x such that n == 3x.
*/

#include <stdio.h>
#include <stdbool.h>

bool isPowerOfThree(int n) {
    if (n <= 0) return false;
    if (n == 1) return true;
    return (n % 3 == 0) && isPowerOfThree(n / 3);
}

int main() {
    int n;
    scanf("%d", &n);

    if (isPowerOfThree(n))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}

// LeetCode Code ->
/*
bool isPowerOfThree(int n) {
    int x;
    if (n == 0) {
        return false;
    }
    if (n == 1) {
        return true;
    }
    if (n > 1) {
        return n % 3 == 0 && isPowerOfThree(n / 3);
    }else {
        return false;
    }
}
*/