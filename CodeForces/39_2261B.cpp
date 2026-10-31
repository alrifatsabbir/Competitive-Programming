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