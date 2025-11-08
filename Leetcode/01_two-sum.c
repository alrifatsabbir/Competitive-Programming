/*
    Problem Code: Two Sum
    Problem Link: https://leetcode.com/problems/two-sum/
    Description: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

 */
#include <stdio.h>
#include <stdlib.h>  

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;  
    int* result = (int*)malloc(2 * sizeof(int));
    
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    return NULL;
}

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int target;
    scanf("%d", &target);
    int returnSize;
    int* result = twoSum(nums, n, target, &returnSize);
    if (result != NULL) {
        printf("[%d, %d]\n", result[0], result[1]);
        free(result);
    } else {
        printf("No two sum solution found.\n");
    }
    return 0;
}