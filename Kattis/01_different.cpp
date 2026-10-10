/*
    Problem Code- different
    Problem Name- A Different Problem
    Problem Link- https://open.kattis.com/problems/different
    Description- Each line of the input consists of a pair of integers. Each integer is between and (inclusive). The input is terminated 
    by end of file.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int a, b;
    while(cin >> a >> b){
        long long int c;
        c = abs(a-b);
        cout << c << endl;
    }
    return 0;
}