/*
    Problem Code- DICEERMAX
    Problem Name- Erase and Maximize
    Problem Link- https://www.codechef.com/START227D/problems/DICEERMAX
    Description- You have with you N dice. Each die has 6 faces, with the faces containing the values {1,2,3,4,5,6} - one value per face. The 
    orientation of the faces does not matter in this problem. You are also given an integer S(N≤S≤6⋅N).....
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, s;
    if (!(cin >> n >> s)) return;
    
    long long k = 0;
    if (s > 5 * n) {
        k = s - 5 * n;
    }
    
    long long max_score = (n - k) * 6 + k * 5;
    cout << max_score << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}