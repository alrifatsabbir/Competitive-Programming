/*
    Problem Code: abc447_b
    Problem Name: mpp
    Problem Link: https://atcoder.jp/contests/abc447/tasks/abc447_b
    Description: You are given a string S consisting of lowercase English letters. Remove all occurrences of the most frequent character(s) in S, 
    then output the remaining characters concatenated in their original order. If there are multiple characters with the maximum frequency, 
    remove all of them.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int freq[256] = {0};
    int max_freq = 0;

    for (char c : S) {
        freq[(unsigned char)c]++;
        max_freq = max(max_freq, freq[(unsigned char)c]);
    }

    for (char c : S) {
        if (freq[(unsigned char)c] != max_freq) {
            cout << c;
        }
    }
    
    cout << endl;

    return 0;
}