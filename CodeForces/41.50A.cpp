/*
    Problem Code- 50A
    Problem Name- Dominio Piling
    Problem Link- https://codeforces.com/problemset/problem/50/A
    Description- You are given a rectangular board of M × N squares. Also you are given an unlimited number of standard domino pieces of 2 × 1 squares. 
    You are allowed to rotate the pieces. You are asked to place as many dominoes as possible on the board so as to meet the following conditions:1. Each 
    domino completely covers two squares.2. No two dominoes overlap.3. Each domino lies entirely inside the board. It is allowed to touch the edges of the board.
    Find the maximum number of dominoes, which can be placed under these restrictions.
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef  pair<int, int> pii;
typedef  pair<ll, ll> pll;

#define all(x) (x).begin(), (x).end()
#define pb push_back

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

void solve() {
    int m, n;
    cin >> m >> n;
    int answer = (m*n) / 2;
    cout << answer << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}