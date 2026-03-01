/*
    Problem Code: abc447_a
    Problem Name: Seats2
    Problem Link: https://atcoder.jp/contests/abc447/tasks/abc447_a
    Description: There are N seats arranged in a row. Each seat can accommodate at most one person. Determine whether it is possible to seat M 
    people in the seats satisfying the following condition. No two adjacent seats may both be occupied.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    if((n+1) / 2 >= m){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}