/*
    Problem Code- smallest-pair-with-different-frequencies
    Problem Name- Smallest pair with different frequencies.
    Problem Link- https://leetcode.com/problems/smallest-pair-with-different-frequencies/
    Description- You are given an integer array nums. Consider all pairs of distinct values x and y from nums such that: x < y x and y have 
    different frequencies in nums. Among all such pairs: Choose the pair with the smallest possible value of x. If multiple pairs have the same x, 
    choose the one with the smallest possible value of y. Return an integer array [x, y]. If no valid pair exists, return [-1, -1].
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        int freq[101] = {0};
        for(int num : nums) {
            freq[num]++;
        }
        for(int x = 1; x <= 100; x++) {
            if(freq[x] == 0) continue;
            for(int y = x + 1; y <= 100; y++) {
                if(freq[y] == 0) continue;
                if(freq[x] != freq[y]) {
                    return {x, y};
                }
            }
        }
        
        return {-1, -1};
    }
};

int main(){
    Solution sol;
    
    // Test case 1
    vector<int> nums1 = {1, 1, 2, 2, 3, 4};
    vector<int> result1 = sol.minDistinctFreqPair(nums1);
    cout << "[" << result1[0] << ", " << result1[1] << "]" << endl;
    
    // Test case 2
    vector<int> nums2 = {1, 5};
    vector<int> result2 = sol.minDistinctFreqPair(nums2);
    cout << "[" << result2[0] << ", " << result2[1] << "]" << endl;
    
    // Test case 3
    vector<int> nums3 = {7};
    vector<int> result3 = sol.minDistinctFreqPair(nums3);
    cout << "[" << result3[0] << ", " << result3[1] << "]" << endl;
    
    return 0;
}