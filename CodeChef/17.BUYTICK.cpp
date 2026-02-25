/*
    Problem Code- BUYTICK
    Problem Name- Buying Tickets
    Problem Link- https://www.codechef.com/START227D/problems/BUYTICK
    Description- Chef wants to buy tickets to a sports game for K people (including himself) The sports game has N total seats, numbered 1 to N. 
    The i-th seat costs Ai rupees. However, several seats have already been bought, because Chef was late to the task. You are given a binary 
    string S, where Si = 1 if the i-th seat has already been bought and Si=0 otherwise. Among the remaining seats, what is the minimum cost Chef 
    has to pay to buy K seats? It is not required that the seats be consecutive or any other property. It may be impossible to buy K seats, in 
    which case print −1.
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    string s;
    cin >> s;
    int available_prices[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            available_prices[count] = a[i];
            count++;
        }
    }
    if (count < k) {
        cout << -1 << endl;
        return;
    }
    sort(available_prices, available_prices + count);
    long long min_cost = 0;
    for (int i = 0; i < k; i++) {
        min_cost += available_prices[i];
    }
    cout << min_cost << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}