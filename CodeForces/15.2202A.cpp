/*
    Problem Code- 2202A
    Problem Name- Parkour Design
    Problem Link- https://codeforces.com/contest/2202/problem/A
    Description- Today, Alex wants to build a parkour course for Steve to train his parkour skills on. A parkour course is a sequence p0→p1→…→pk 
    of integer coordinates on the plane. Here, a contiguous pair of coordinates is called a move, denoted as pi−1→pi. Alex knows that Steve can 
    only perform the following types of moves: (xi,yi)→(xi+2,yi+1); (xi,yi)→(xi+3,yi);(xi,yi)→(xi+4,yi−1). Note that Steve will not perform any 
    other type of moves. For example, Steve can perform (0,0)→(2,1)and (2,1)→(5,1), but will never perform moves such as (2,1)→(3,2), 
    (3,0)→(5,−1), or (4,−1)→(6,−1) (even though they may look very easy). You are given an integer coordinate (x,y) on the plane. Please determine
    if it is possible to make a parkour course q0,q1,…,qk that satisfies the following conditions: q0=(0,0); qk=(x,y); The parkour course only 
    consists of moves that Steve can perform
*/
#include <bits/stdc++.h>
using namespace std;


void solve() {
    long long x, y;
    cin >> x >> y;
    if ((x - 2 * y) % 3 != 0) {
        cout << "NO" << endl;
        return;
    }
    long long val = (x - 2 * y) / 3;

    if (val < 0) {
        cout << "NO" << endl;
        return;
    }
    long long min_c = max(0LL, -y);
    long long max_c = val / 2;

    if (min_c <= max_c) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}