/*
    Problem Code- 112A
    Problem Name- Petya and Strings
    Problem Link- https://codeforces.com/problemset/problem/112/A
    Description- Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase 
    Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered 
    equivalent to the corresponding lowercase letter. Help Petya perform the comparison.
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
    string a , b;
    cin >> a >> b;
    for_each(
        a.begin(), a.end(), 
        [](char & c){
        c = tolower(c);
    });
    for_each(
        b.begin(), b.end(), 
        [](char & c){
        c = tolower(c);
    });

    cout << a.compare(b) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}