/*
    Problem Code: 2230A
    Problem Name: Optimal Purchase
    Problem Link: https://codeforces.com/problemset/problem/2230/A
    Description : Input The first line contains one integer t(1≤t≤104) — the number of test cases. Each test case consists of one line containing three 
    integers n,a,b (1≤n,a,b≤108) — the number of students, the cost of an individual key, and the cost of a group key. Output For each test case, output one 
    integer — the minimum amount of money needed to provide access to the online course for all n students.
*/

#include <bits/stdc++.h>
using namespace std;
#define ld long long


int main(){
    ld t;
    cin >> t;
    while(t--){
        ld n, a, b;
        cin >> n >> a >> b;

        ld full_groups = n / 3;
        ld remaining = n % 3;

        ld cost = full_groups * min(b, 3*a);

        if(remaining > 0){
            cost += min(b, remaining * a);
        }
        cout << cost << endl;
    }
    return 0;
}