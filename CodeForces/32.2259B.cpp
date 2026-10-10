/*
    Problem Code: 2259B
    Problem Name: Minus Two
    Problem Link: https://codeforces.com/problemset/problem/2259/B
    Description : You are given an array a1,a2,…,an. You may perform the following operation: For all indices i(1≤i≤n), set ai=|ai−2|. Find the maximum possible 
    frequency of any integer in a after performing the operation an arbitrary number (possibly zero) of times.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        int countOdd = 0;
        int bucket0 = 0, bucket1 = 0;
        
        for(int i = 0; i < n; i++){
            long long x;
            cin >> x;
            if(x % 2 == 1){
                countOdd++;
            } else {
                long long entry = x / 2;
                if(entry % 2 == 0) bucket0++;
                else bucket1++;
            }
        }
        
        int ans = max({countOdd, bucket0, bucket1});
        cout << ans << "\n";
    }
    return 0;
}