/*
    Problem Code- 2202B
    Problem Name- ABAB Construction
    Problem Link- https://codeforces.com/contest/2202/problem/B
    Description- There is a string T of length n, such that Ti = 'a' for all odd i and Ti= 'b' for all even i. One day, Bob generated a string S
    with the following algorithm. Initialize S to the empty string. Remove either the first letter or the last letter from T, and append it to S.
    If T is empty, terminate and return the string S. Otherwise, go back to the second step. Then, Bob wrote down the generated string S on a note 
    and forgot about it for a few years. The note was worn out when Bob found it, and someone might have secretly changed some letters. Of course, 
    Bob wants to know if someone did alter the string! You are given a string X of length n, which consists of 'a', 'b', and '?'. Please determine 
    if there exists a string A which satisfies the following conditions: |A|=n; Ai is either 'a' or 'b' for all 1≤i≤n; Ai=Xi for all 1≤i≤n such 
    that Xi is not '?'; The string A can be generated from the algorithm described above.
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int target_a = (n + 1) / 2;
    vector<pair<int, int>> dp(4, {1e9, -1e9});
    int start_p = (1 << 1) | (n % 2);
    dp[start_p] = {0, 0};
    for (int i = 0; i < n; i++) {
        vector<pair<int, int>> next_dp(4, {1e9, -1e9});
        for (int p = 0; p < 4; p++) {
            if (dp[p].first > dp[p].second) continue;
            int lp = (p >> 1) & 1, rp = p & 1;
            if ((s[i] == 'a' || s[i] == '?')) {
                if (lp == 1) {
                    next_dp[(1 - lp) << 1 | rp].first = min(next_dp[(1 - lp) << 1 | rp].first, dp[p].first + 1);
                    next_dp[(1 - lp) << 1 | rp].second = max(next_dp[(1 - lp) << 1 | rp].second, dp[p].second + 1);
                }
                if (rp == 1) {
                    next_dp[lp << 1 | (1 - rp)].first = min(next_dp[lp << 1 | (1 - rp)].first, dp[p].first + 1);
                    next_dp[lp << 1 | (1 - rp)].second = max(next_dp[lp << 1 | (1 - rp)].second, dp[p].second + 1);
                }
            }
            if ((s[i] == 'b' || s[i] == '?')) {
                if (lp == 0) {
                    next_dp[(1 - lp) << 1 | rp].first = min(next_dp[(1 - lp) << 1 | rp].first, dp[p].first);
                    next_dp[(1 - lp) << 1 | rp].second = max(next_dp[(1 - lp) << 1 | rp].second, dp[p].second);
                }
                if (rp == 0) {
                    next_dp[lp << 1 | (1 - rp)].first = min(next_dp[lp << 1 | (1 - rp)].first, dp[p].first);
                    next_dp[lp << 1 | (1 - rp)].second = max(next_dp[lp << 1 | (1 - rp)].second, dp[p].second);
                }
            }
        }
        dp = next_dp;
    }
    bool ok = false;
    for (int p = 0; p < 4; p++) if (target_a >= dp[p].first && target_a <= dp[p].second) ok = true;
    cout << (ok ? "YES" : "NO") << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}