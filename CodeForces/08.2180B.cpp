/*
    Problem Code- 2180B
    Problem Name- Ashmal
    Problem Link- https://codeforces.com/contest/2180/problem/B
    Description- 
    Input:
    Each test contains multiple test cases. The first line contains the number of test cases t(1≤t≤500). The description 
    of the test cases follows.The first line of each test case contains a single integer n(1≤n≤1000) — size of array a. The next line contains 
    n strings a1,a2,…,an (1≤|ai|≤4000), each consisting of lowercase English letters. It is guaranteed that the sum of n over all test cases does 
    not exceed 1000, and the total length of all strings in the input (over all test cases) does not exceed 4000.
    Output:
    For each test case, print the lexicographically minimum string s you can reach after nsteps.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        string s = "";
        for (int i = 0; i < n; i++) {
            string prepend = a[i] + s;
            string append = s + a[i];
            if (prepend < append) {
                s = prepend;
            } else {
                s = append;
            }
        }
        cout << s << "\n";
    }

    return 0;
}
