/*
    Problem Code: 1A
    Problem Name: Theatre Square
    Problem Link: https://codeforces.com/problemset/problem/1/A
    Description : Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision 
    was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a. What is the least number of flagstones needed to pave the 
    Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of 
    flagstones should be parallel to the sides of the Square.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, m,a;
    cin >> n >> m >> a;

    ll len = ceil((double)n / a);
    ll wid = ceil((double)m / a);
    ll req = len * wid;
    cout << req << endl;
    return 0;
}