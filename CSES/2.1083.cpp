/*
    Problem Code- 1083
    Problem Name- Missing Number
    Problem Link- https://cses.fi/problemset/task/1083
    Description- Given n-1 numbers from 1 to n, find the missing number.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll a[n-1];
    ll s=0; 
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
        s += a[i];
    }
    ll total = (n * (n + 1)) / 2;
    cout << total - s << "\n";
    return 0;
}