/*
    Problem Code: 110A
    Problem Name: Nearly Lucky Number
    Problem Link: https://codeforces.com/problemset/problem/110/A
    Description : Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the 
    lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int c = 0, ss, i = 0;
    cin >> s;
    ss = s.size();
    while(i != ss){
        if(s[i] == '4' || s[i] == '7'){
            c++;
        }
        i++;
    }
    if(c == 4 || c == 7){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}