/*
    Problem Code: 1791A
    Problem Name: Codeforces Checking
    Problem Link: https://codeforces.com/problemset/problem/1791/A
    Description : Given a lowercase Latin character (letter), check if it appears in the string codeforces. The first line of the input 
    contains an integer t(1≤t≤26) — the number of test cases. The only line of each test case contains a character c — a single lowercase 
    Latin character (letter). For each test case, output "YES" (without quotes) if c satisfies the condition, and "NO" (without quotes) otherwise.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    string s = "codeforces";
    while(t--){
        char a;
        cin >> a;
        bool found = false;
        for( char c : s){
            if(c == a){
                found = true;
                break;
            }
        }
        if(found){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}