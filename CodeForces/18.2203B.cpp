/*
    Problem Code- 2203B
    Problem Name- Beautiful Numbers
    Problem Link- https://codeforces.com/contest/2203/problem/B
    Description- Let's define F(x) as the sum of the digits of x. An integer x is considered beautiful if F(F(x))=F(x). You are given an integer x.
    In one move, you can choose any digit in the number and replace it with another. The resulting number cannot have leading zeros. Your task is 
    to calculate the minimum number of moves (possibly zero) required to make the given number beautiful.
*/
#include <bits/stdc++.h>
using namespace std;

void F() {
    string x;
    cin >> x;
    int n = x.length();
    long long current_sum = 0;
    int reductions[n];
    for (int i = 0; i < n; i++) {
        int d = x[i] - '0';
        current_sum += d;
        int min_val = (i == 0) ? 1 : 0;
        reductions[i] = d - min_val;
    }
    if (current_sum <= 9) {
        cout << 0 << endl;
        return;
    }
    sort(reductions, reductions + n, greater<int>());
    long long needed = current_sum - 9;
    int moves = 0;
    for (int i = 0; i < n; i++) {
        if (needed <= 0) break;
        needed -= reductions[i];
        moves++;
    }
    cout << moves << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        F();
    }
    return 0;
}