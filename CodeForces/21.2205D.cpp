/*
    Problem Code- 2205D
    Problem Name- Simons and Beating Peaks
    Problem Link- https://codeforces.com/contest/2205/problem/D
    Description- We call an array b of length m cool if and only if: There exists no index i (1<i<m) such that bi=max({bi−1,bi,bi+1}). Simons has 
    an array a of size n. Initially, the array is a permutation∗
*/
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define all(a) a.begin(), a.end()
#define int long long
#define pb push_back
#define sz(a) (int)(a).size()
using vi = vector<int>;
using vl = vector<long long>;
using vvl = vector<vl>;

void rd(vi& a) { for (int& x : a)cin >> x; }

struct ST {
    int n;vvl st;vl log;
    ST(const vl& v) {
        n = v.size() - 1;
        int maxlog = 20;
        st.assign(n + 1, vl(maxlog + 1));
        log.assign(n + 2, 0);
        for (int i = 2; i <= n; i++) {
            log[i] = log[i >> 1] + 1;
        }
        for (int i = 1; i <= n; i++) {
            st[i][0] = v[i];
        }
        for (int j = 1; j <= maxlog; j++) {
            for (int i = 1; i + (1 << j) - 1 <= n; i++) {
                st[i][j] = max(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
            }
        }
    }
    int query(int l, int r) {
        int j = log[r - l + 1];
        return max(st[l][j], st[r - (1 << j) + 1][j]);
    }
};

void solve() {
    int n;cin >> n;
    vi a(n);rd(a);
    vl b(n + 1);
    for (int i = 0; i < n; i++) {
        b[i + 1] = a[i];
    }
    ST st(b);
    vi ll(n, -1), rr(n, -1);
    for (int i = 0; i < n; i++) {
        int l = 0, r = i - 1;
        int ans = -1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (st.query(m + 1, i) >= a[i]) {
                ans = m;
                l = m + 1;
            }
            else {
                r = m - 1;
            }
        }
        ll[i] = ans;
    }

    for (int i = 0; i < n; i++) {
        int l = i + 1, r = n - 1;
        int ans = -1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (st.query(i + 2, m + 1) >= a[i]) {
                ans = m;
                r = m - 1;
            }
            else {
                l = m + 1;
            }
        }
        rr[i] = ans;
    }

    vi qz(n, 1), hz(n, 1);
    for (int i = 0; i < n; i++) {
        if (ll[i] != -1) {
            qz[i] = qz[ll[i]] + 1;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (rr[i] != -1) {
            hz[i] = hz[rr[i]] + 1;
        }
    }
    int mx = 0;
    for (int i = 0; i < n; i++) {
        mx = max(mx, qz[i] + hz[i] - 1);
    }
    cout << n - mx << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}