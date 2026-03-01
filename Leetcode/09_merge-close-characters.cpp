/*
    Problem Code- merge-close-characters
    Problem Name- Merge close characters
    Problem Link- https://leetcode.com/problems/merge-close-characters/
    Description- You are given a string s consisting of lowercase English letters and an integer k. Two equal characters in the current string s 
    are considered close if the distance between their indices is at most k. When two characters are close, the right one merges into the left. 
    Merges happen one at a time, and after each merge, the string updates until no more merges are possible. Return the resulting string after 
    performing all possible merges.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeCharacters(string s, int k) {
        string v = s;
        
        bool merged = true;
        while(merged) {
            merged = false;
            for(int i = 0; i < v.length(); i++) {
                for(int j = i + 1; j < v.length(); j++) {
                    if(j - i > k) break;
                    if(v[i] == v[j]) {
                        v.erase(j, 1);
                        merged = true;
                        break;
                    }
                }
                if(merged) break;
            }
        }
        return v;
    }
};

int main(){
    Solution sol;
    
    // Test case 1
    string s1 = "abca";
    int k1 = 3;
    cout << "Input: s = \"" << s1 << "\", k = " << k1 << endl;
    cout << "Output: \"" << sol.mergeCharacters(s1, k1) << "\"" << endl;
    
    // Test case 2
    string s2 = "aabca";
    int k2 = 2;
    cout << "Input: s = \"" << s2 << "\", k = " << k2 << endl;
    cout << "Output: \"" << sol.mergeCharacters(s2, k2) << "\"" << endl;
    
    // Test case 3
    string s3 = "yybyzybz";
    int k3 = 2;
    cout << "Input: s = \"" << s3 << "\", k = " << k3 << endl;
    cout << "Output: \"" << sol.mergeCharacters(s3, k3) << "\"" << endl;
    
    return 0;
}
