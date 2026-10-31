/*
    Problem Code- 2261B
    Problem Name- The capital of France?
    Problem Link- https://codeforces.com/problemset/problem/2261/B
    Description- Obesiti may not know the capital of France, but he knows that France has a lot of restaurants. They are arranged in a row n restaurants. Rating
    i-th restaurant is equal to ai. Obesity can change restaurant ratings using her special power. In one operation, Obesity selects two adjacent restaurants. If their 
    ratings are equal, nothing happens. Otherwise, the rating of the restaurant with the lower rating is increased by1.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll maximum = 0;
        ll minimum = 2e18;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            maximum = max(maximum, x);
            minimum = min(minimum, x);
        }
        ll diff = minimum ^ maximum;
        ll mask = 0;
        while (diff > mask) {
            mask = (mask << 1) | 1;
        }
        cout << (maximum | mask) << endl;
    }
    return 0;
}