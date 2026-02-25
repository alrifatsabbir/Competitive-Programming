/*
    Problem Code- BANKGLITCH
    Problem Name- Bank Glitch
    Problem Link- https://www.codechef.com/START227D/problems/BANKGLITCH
    Description- In Chefland, there are 2 currencies in use, currency 1 and currency 2. Normally, one unit of currency 1 is worth exactly 1 unit of
    currency2....
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, x, y;
    if (!(cin >> a >> b >> x >> y)) return;
    int trades = a / x;
    int profit_per_trade = y - x;
    int total_money = (a + b) + (trades * profit_per_trade);
    cout << total_money << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}